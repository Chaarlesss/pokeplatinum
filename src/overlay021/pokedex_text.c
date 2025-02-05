#include "overlay021/pokedex_text.h"

#include <nitro.h>
#include <string.h>

#include "constants/narc.h"
#include "constants/species.h"

#include "text/pl_msg.naix"

#include "error_handling.h"
#include "inlines.h"
#include "message.h"
#include "message_util.h"
#include "pokedex_language.h"
#include "strbuf.h"

enum LangIndex {
    LI_JAPANESE,
    LI_ENGLISH,
    LI_FRENCH,
    LI_GERMAN,
    LI_ITALIAN,
    LI_SPANISH
};

static const u8 messageBankLanguageOrder[NUM_LANGUAGES] = {
    LI_ENGLISH,
    LI_FRENCH,
    LI_GERMAN,
    LI_ITALIAN,
    LI_SPANISH,
    LI_JAPANESE
};

static inline int LanguageIndex_Guarded(int languageIndex);
static inline BOOL ValidLanguage(int species, int languageIndex);
static Strbuf *LoadMessage(int bankID, int entryID, int heapID);
static void GetLanguageIndex(int species, int language, int *dexNum, int *languageIndexUnguarded, int *languageIndex);

void PokedexText_Free(Strbuf *strbuf)
{
    Strbuf_Free(strbuf);
}

int PokedexText_ForeignLanguage(int languageIndex)
{
    return PokedexLanguage_IndexToLanguage(messageBankLanguageOrder[languageIndex + 1]);
}

Strbuf *PokedexText_NameNumber(int species, int language, int heapID)
{
    int dexNum;
    int languageIndex_unguarded;
    int index;
    int bankID;

    GetLanguageIndex(species, language, &dexNum, &languageIndex_unguarded, &index);

    if (index == NUM_LANGUAGES) {
        return MessageUtil_SpeciesName(species, heapID);
    } else {
        const int nameNumberBanks[] = {
            message_bank_unk_0717,
            message_bank_species_name_number_1,
            message_bank_unk_0713,
            message_bank_unk_0714,
            message_bank_species_name_number_2,
            message_bank_species_name_number_3
        };
        bankID = nameNumberBanks[index];
        index = dexNum;
    }

    return LoadMessage(bankID, index, heapID);
}

Strbuf *PokedexText_Category(int species, int language, int heapID)
{
    int dexNum;
    int languageIndex_unguarded;
    int index;
    int bankID;

    GetLanguageIndex(species, language, &dexNum, &languageIndex_unguarded, &index);

    if (index == NUM_LANGUAGES) {
        index = species;
        bankID = message_bank_unk_0711;
    } else {
        const int categoryBanks[] = {
            message_bank_unk_0723,
            message_bank_species_category,
            message_bank_unk_0719,
            message_bank_unk_0720,
            message_bank_unk_0721,
            message_bank_unk_0722
        };
        bankID = categoryBanks[index];
        index = dexNum;
    }

    return LoadMessage(bankID, index, heapID);
}

Strbuf *PokedexText_DexEntry(int species, int language, int entryOffset, int heapID)
{
    int dexNum;
    int languageIndex_unguarded;
    int index;
    int bankID;

    GetLanguageIndex(species, language, &dexNum, &languageIndex_unguarded, &index);

    if (index == NUM_LANGUAGES) {
        GF_ASSERT(entryOffset < 1);
        index = species + entryOffset;
        bankID = message_bank_species_dex_entry;
    } else {
        const int dexEntryBanks[] = {
            message_bank_unk_0705,
            message_bank_unk_0700,
            message_bank_unk_0701,
            message_bank_unk_0702,
            message_bank_unk_0703,
            message_bank_unk_0704
        };
        GF_ASSERT(entryOffset < 1);
        bankID = dexEntryBanks[index];
        index = dexNum + entryOffset;
    }

    return LoadMessage(bankID, index, heapID);
}

static inline BOOL ValidLanguage(int species, int languageIndex)
{
    if ((species > NATIONAL_DEX_COUNT) && (languageIndex != NUM_LANGUAGES)) {
        return FALSE;
    }

    return TRUE;
}

static Strbuf *LoadMessage(int bankID, int entryID, int heapID)
{
    MessageLoader *messageLoader = MessageLoader_Init(MESSAGE_LOADER_NARC_HANDLE, NARC_INDEX_MSGDATA__PL_MSG, bankID, heapID);

    if (messageLoader) {
        Strbuf *strbuf = Strbuf_Init(256, heapID);

        if (strbuf) {
            MessageLoader_GetStrbuf(messageLoader, entryID, strbuf);
        }

        MessageLoader_Free(messageLoader);
        return strbuf;
    }

    return NULL;
}

static void GetLanguageIndex(int species, int language, int *dexNum, int *languageIndexUnguarded, int *languageIndex)
{
    *languageIndexUnguarded = PokedexLanguage_LanguageToIndex(language);

    GF_ASSERT(*languageIndexUnguarded < NUM_LANGUAGES);

    *dexNum = species;
    *languageIndex = LanguageIndex_Guarded(*languageIndexUnguarded);

    GF_ASSERT(ValidLanguage(*dexNum, *languageIndex));
}

static inline int LanguageIndex_Guarded(int languageIndex)
{
    GF_ASSERT(languageIndex < NUM_LANGUAGES);
    return (languageIndex == LI_ENGLISH) ? NUM_LANGUAGES : languageIndex;
}
