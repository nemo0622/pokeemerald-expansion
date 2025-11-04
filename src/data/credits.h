enum
{
    PAGE_TITLE,
    PAGE_DEVELOPER,
    PAGE_MY_PARTNER,
    PAGE_ENGINE,
    PAGE_DISCORD_MODS,
    PAGE_FEATURES_1,
    PAGE_FEATURES_2,
    PAGE_TILES_1,
    PAGE_BATTLE_SPRITES_1,
    PAGE_BATTLE_SPRITES_2,
    PAGE_TRAINER_SPRITES,
    PAGE_OVERWORLD_TRAINERS,
    PAGE_OVERWORLD_POKEMON,
    PAGE_USER_INTERFACE,
    PAGE_USER_INTERFACE_2,
    PAGE_SPECIAL_THANKS_1,
    PAGE_SPECIAL_THANKS_2,
    PAGE_SPECIAL_THANKS_3,
    PAGE_SPECIAL_THANKS_4,
    PAGE_COUNT
};

#define ENTRIES_PER_PAGE 5

static const u8 sCreditsText_EmptyString[]                    = _("");
static const u8 sCreditsText_PkmnEmeraldVersion[]             = _("Pokémon Lazarus Version");
static const u8 sCreditsText_Credits[]                        = _("Credits");
static const u8 sCreditsText_ExecutiveDirector[]              = _("Executive Director");
static const u8 sCreditsText_Developer[]                      = _("Developer");
static const u8 sCreditsText_MyPartner[]                      = _("My Amazing Partner");
static const u8 sCreditsText_BattleDirector[]                 = _("Battle Director");
static const u8 sCreditsText_MainProgrammer[]                 = _("Main Programmer");
static const u8 sCreditsText_BattleSystemPgrms[]              = _("Battle System Programmers");
static const u8 sCreditsText_FieldSystemPgrms[]               = _("Field System Programmer");
static const u8 sCreditsText_Programmers[]                    = _("Programmers");
static const u8 sCreditsText_MainGraphicDesigner[]            = _("Main Graphic Designer");
static const u8 sCreditsText_GraphicDesigners[]               = _("Graphic Designers");
static const u8 sCreditsText_PkmnDesigners[]                  = _("POKéMON Designers");
static const u8 sCreditsText_BattleSprites[]                  = _("Pokémon Battle Sprites");
static const u8 sCreditsText_TrainerSprites[]                 = _("Trainer Battle Sprites");
static const u8 sCreditsText_OverworldTrainers[]                  = _("NPC Sprites");
static const u8 sCreditsText_OverworldPokemon[]                   = _("Overworld Pokémon Sprites");
static const u8 sCreditsText_UserInterface[]                       = _("UI Graphics");
static const u8 sCreditsText_CustomMusic[]                = _("Music");
static const u8 sCreditsText_MapDesigners[]                   = _("Map Designers");
static const u8 sCreditsText_MapDataDesigners[]               = _("Map Data Designers");
static const u8 sCreditsText_ParametricDesigners[]            = _("Parametric Designers");
static const u8 sCreditsText_PokedexText[]                    = _("POKéDEX Text");
static const u8 sCreditsText_EnvAndToolPgrms[]                = _("Environment & Tool Programmers");
static const u8 sCreditsText_NCLProductTesting[]              = _("NCL Product Testing");
static const u8 sCreditsText_SpecialThanks[]                  = _("Special Thanks");
static const u8 sCreditsText_NextUp[]                   = _("Next up...");
static const u8 sCreditsText_Producers[]                      = _("Producers");
static const u8 sCreditsText_ExecProducers[]                  = _("Executive Producers");
static const u8 sCreditsText_InfoSupervisors[]                = _("Information Supervisors");
static const u8 sCreditsText_TaskManagers[]                   = _("Task Managers");
static const u8 sCreditsText_BrailleCodeCheck[]               = _("Braille Code Check");
static const u8 sCreditsText_Engine[]                         = _("Pokeemerald Engine");
static const u8 sCreditsText_BattleFrontierData[]             = _("Battle Frontier Data");
static const u8 sCreditsText_SupportProgrammers[]             = _("Support Programmers");
static const u8 sCreditsText_Artwork[]                        = _("Artwork");
static const u8 sCreditsText_DiscordMods[]                    = _("Discord Mods");
static const u8 sCreditsText_LeadGraphicArtist[]              = _("Lead Graphic Artist");
static const u8 sCreditsText_SatoshiTajiri[]                  = _("Satoshi Tajiri");
static const u8 sCreditsText_TheyAreSoCool[]                  = _("(They are cool) (<3)");
static const u8 sCreditsText_CactusMV[]                    = _("cactusmv");
static const u8 sCreditsText_Nemo622[]                        = _("Nemo622");
static const u8 sCreditsText_FishingMinigame[]                = _("Fishing Minigame: Bivurnum");
static const u8 sCreditsText_PretTeam[]                       = _("Pret Team");
static const u8 sCreditsText_MiningMinigame[]                 = _("Mining Minigame: Vol");
static const u8 sCreditsText_OverworldEncounters[]            = _("Overworld Pokémon: HashtagMarky");
static const u8 sCreditsText_Blizblob[]                       = _("Blizblob");
static const u8 sCreditsText_Snad[]                           = _("snad");
static const u8 sCreditsText_QuestSystem[]                    = _("Quest Menu: PokémonSanFran");
static const u8 sCreditsText_Dexnav[]                         = _("DexNav: ghoulslash");
static const u8 sCreditsText_Trey[]                        = _("Trey");
static const u8 sCreditsText_DayNightSystem[]                 = _("Day/Night System: merrp");
static const u8 sCreditsText_Missingno[]                      = _("MissingNoVGC");
static const u8 sCreditsText_MoreInDocs[]                     = _("(More info in Documentation!)");
static const u8 sCreditsText_SageDeoxys[]                = _("SageDeoxys");
static const u8 sCreditsText_RomHackingHideout[]              = _("ROM Hacking Hideout");
static const u8 sCreditsText_AnimaNel[]                    = _("Anima_Nel");
static const u8 sCreditsText_TrainerDX[]                  = _("Trainer DX");
static const u8 sCreditsText_Nuukiie[]                     = _("Nuukiie");
static const u8 sCreditsText_Egg3ggEgg[]                      = _("Egg3ggEgg");
static const u8 sCreditsText_SirWhibbles[]                       = _("SirWhibbles");
static const u8 sCreditsText_JunOkutani[]                     = _("Jun Okutani");
static const u8 sCreditsText_AtsukoNishida[]                  = _("Atsuko Nishida");
static const u8 sCreditsText_MuneoSaito[]                     = _("Muneo Saito");
static const u8 sCreditsText_RenaYoshikawa[]                  = _("Rena Yoshikawa");
static const u8 sCreditsText_COMBOY[]                     = _("COMBOY");
static const u8 sCreditsText_SupahSanti[]                   = _("SupahSanti");
static const u8 sCreditsText_EeVeeEe[]                    = _("EeVeeEe1999");
static const u8 sCreditsText_LuigiTKO[]                = _("LuigiTKO");
static const u8 sCreditsText_MegamanOmega[]                    = _("Megaman-Omega");
static const u8 sCreditsText_Coffee[]                     = _("Coffee (From Nemo622 Discord!)");
static const u8 sCreditsText_TortleDove[]             = _("TortleDove");
static const u8 sCreditsText_KesterHendrickPixels[]            = _("kesterhendrickpixels");
static const u8 sCreditsText_MinidexProject[]                  = _("MINIDEX Project");
static const u8 sCreditsText_AveonTrainer[]               = _("AveonTrainer");
static const u8 sCreditsText_Zezitra[]             = _("Zezitra (Ilios Region Map)");
static const u8 sCreditsText_Solo993[]                = _("Solo993");
static const u8 sCreditsText_WhoseSupportMadeThisPossible[]                  = _("whose support made this possible :)");
static const u8 sCreditsText_KazuyukiTerada[]                 = _("Kazuyuki Terada");
static const u8 sCreditsText_YuriSakurai[]                    = _("Yuri Sakurai");
static const u8 sCreditsText_HiromiSagawa[]                   = _("Hiromi Sagawa");
static const u8 sCreditsText_MyDiscordAndKoFiCommunity[]                  = _("My Ko-Fi and Discord Community,");
static const u8 sCreditsText_YoshioTajiri[]                   = _("Yoshio Tajiri");
static const u8 sCreditsText_TeikoSasaki[]                    = _("Teiko Sasaki");
static const u8 sCreditsText_SachikoHamano[]                  = _("Sachiko Hamano");
static const u8 sCreditsText_ChieMatsumiya[]                  = _("Chie Matsumiya");
static const u8 sCreditsText_AkikoShinozaki[]                 = _("Akiko Shinozaki");
static const u8 sCreditsText_AstukoFujii[]                    = _("Astuko Fujii");
static const u8 sCreditsText_OutfitSystem[]                   = _("Outfit System & More: mudskip");
static const u8 sCreditsText_Zaebucca[]                 = _("Zaebucca");
static const u8 sCreditsText_PokemonCrystal[]                 = _("Game Freak (Pokémon Crystal)");
static const u8 sCreditsText_YumiFunasaka[]                   = _("Yumi Funasaka");
static const u8 sCreditsText_NaokoYanase[]                    = _("Naoko Yanase");
static const u8 sCreditsText_NCLSuperMarioClub[]              = _("NCL Super Mario Club");
static const u8 sCreditsText_AtsushiTada[]                    = _("Atsushi Tada");
static const u8 sCreditsText_IllBeRemakingThe[]                = _("I'll be remaking the");
static const u8 sCreditsText_AlolaRegionInMy[]                = _("Alola Region in my classic");
static const u8 sCreditsText_HiroNakamura[]                   = _("Hiro Nakamura");
static const u8 sCreditsText_HiroyukiUesugi[]                 = _("Hiroyuki Uesugi");
static const u8 sCreditsText_TerukiMurakawa[]                 = _("Teruki Murakawa");
static const u8 sCreditsText_AkiraKinashi[]                   = _("Akira Kinashi");
static const u8 sCreditsText_TeamAquasHideout[]                = _("Team Aqua's Hideout");
static const u8 sCreditsText_Pawkkie[]                        = _("Team Aqua's Asset Repo");
static const u8 sCreditsText_TakanaoKondo[]                   = _("Takanao Kondo");
static const u8 sCreditsText_AiMashima[]                      = _("Ai Mashima");
static const u8 sCreditsText_GakujiNomoto[]                   = _("Gakuji Nomoto");
static const u8 sCreditsText_TakehiroIzushi[]                 = _("Takehiro Izushi");
static const u8 sCreditsText_HitoshiYamagami[]                = _("Hitoshi Yamagami");
static const u8 sCreditsText_KyokoWatanabe[]                  = _("Kyoko Watanabe");
static const u8 sCreditsText_TakaoNakano[]                    = _("Takao Nakano");
static const u8 sCreditsText_HiroyukiJinnai[]                 = _("Hiroyuki Jinnai");
static const u8 sCreditsText_HiroakiTsuru[]                   = _("Hiroaki Tsuru");
static const u8 sCreditsText_TsunekazIshihara[]               = _("Tsunekaz Ishihara");
static const u8 sCreditsText_SatoruIwata[]                    = _("Satoru Iwata");
static const u8 sCreditsText_Cecilily[]                   = _("cecilily");
static const u8 sCreditsText_SatoshiMitsuhara[]               = _("Satoshi Mitsuhara");
static const u8 sCreditsText_JapanBrailleLibrary[]            = _("Japan Braille Library");
static const u8 sCreditsText_TomotakaKomura[]                 = _("Tomotaka Komura");
static const u8 sCreditsText_TomSanborn[]                  = _("Tom Sanborn");
static const u8 sCreditsText_VGMusic[]                 = _("VGMusic Artists");
static const u8 sCreditsText_KenjiroIto[]                     = _("Kenjiro Ito");
static const u8 sCreditsText_ThankYouForPlaying[]                   = _("Thank you for playing Pokémon Lazarus! :)");
static const u8 sCreditsText_SeaglassStyle[]                 = _("Seaglass style! Stay tuned!");
static const u8 sCreditsText_SachikoNakamichi[]               = _("Sachiko Nakamichi");
static const u8 sCreditsText_FujikoNomura[]                   = _("Fujiko Nomura");
static const u8 sCreditsText_KazukiYoshihara[]                = _("Kazuki Yoshihara");
static const u8 sCreditsText_RetsujiNomoto[]                  = _("Retsuji Nomoto");
static const u8 sCreditsText_AzusaTajima[]                    = _("Azusa Tajima");
static const u8 sCreditsText_ShusakuEgami[]                   = _("Shusaku Egami");
static const u8 sCreditsText_PackageAndManual[]               = _("Package & Manual Illustration");
static const u8 sCreditsText_EnglishVersion[]                 = _("English Version Coordinators");
static const u8 sCreditsText_Translator[]                     = _("Translator");
static const u8 sCreditsText_TextEditor[]                     = _("Text Editor");
static const u8 sCreditsText_NCLCoordinator[]                 = _("NCL Coordinator");
static const u8 sCreditsText_GraphicDesigner[]                = _("Graphic Designer");
static const u8 sCreditsText_NOAProductTesting[]              = _("NOA Product Testing");
static const u8 sCreditsText_HideyukiNakajima[]               = _("Hideyuki Nakajima");
static const u8 sCreditsText_HidenoriSaeki[]                  = _("Hidenori Saeki");
static const u8 sCreditsText_YokoWatanabe[]                   = _("Yoko Watanabe");
static const u8 sCreditsText_SakaeKimura[]                    = _("Sakae Kimura");
static const u8 sCreditsText_ChiakiShinkai[]                  = _("Chiaki Shinkai");
static const u8 sCreditsText_SethMcMahill[]                   = _("Seth McMahill");
static const u8 sCreditsText_NobOgasawara[]                   = _("Nob Ogasawara");
static const u8 sCreditsText_TeresaLillygren[]                = _("Teresa Lillygren");
static const u8 sCreditsText_KimikoNakamichi[]                = _("Kimiko Nakamichi");
static const u8 sCreditsText_SouichiYamamoto[]                = _("Souichi Yamamoto");
static const u8 sCreditsText_YuichiroIto[]                    = _("Yuichiro Ito");
static const u8 sCreditsText_ThomasHertzog[]                  = _("Thomas Hertzog");
static const u8 sCreditsText_MikaKurosawa[]                   = _("Mika Kurosawa");
static const u8 sCreditsText_NationalFederationBlind[]        = _("National Federation of the Blind");
static const u8 sCreditsText_PatriciaAMaurer[]                = _("Patricia A. Maurer");
static const u8 sCreditsText_EuropeanBlindUnion[]             = _("European Blind Union");
static const u8 sCreditsText_AustralianBrailleAuthority[]     = _("Australian Braille Authority");
static const u8 sCreditsText_RoyalNewZealandFederationBlind[] = _("Royal New Zealand Federation for the Blind");
static const u8 sCreditsText_MotoyasuTojima[]                 = _("Motoyasu Tojima");
static const u8 sCreditsText_NicolaPrattBarlow[]              = _("Nicola Pratt-Barlow");
static const u8 sCreditsText_ShellieDow[]                     = _("Shellie Dow");
static const u8 sCreditsText_ErikJohnson[]                    = _("Erik Johnson");
static const struct CreditsEntry sCreditsEntry_EmptyString                      = { 0, FALSE, sCreditsText_EmptyString};
static const struct CreditsEntry sCreditsEntry_PkmnEmeraldVersion               = { 7,  TRUE, sCreditsText_PkmnEmeraldVersion};
static const struct CreditsEntry sCreditsEntry_Credits                          = {11,  TRUE, sCreditsText_Credits};
static const struct CreditsEntry sCreditsEntry_ExecutiveDirector                = { 8,  TRUE, sCreditsText_ExecutiveDirector};
static const struct CreditsEntry sCreditsEntry_Developer                        = {12,  TRUE, sCreditsText_Developer};
static const struct CreditsEntry sCreditsEntry_MyPartner                        = {10,  TRUE, sCreditsText_MyPartner};
static const struct CreditsEntry sCreditsEntry_BattleDirector                   = {10,  TRUE, sCreditsText_BattleDirector};
static const struct CreditsEntry sCreditsEntry_MainProgrammer                   = {10,  TRUE, sCreditsText_MainProgrammer};
static const struct CreditsEntry sCreditsEntry_BattleSystemPgrms                = { 8,  TRUE, sCreditsText_BattleSystemPgrms};
static const struct CreditsEntry sCreditsEntry_FieldSystemPgrms                 = { 7,  TRUE, sCreditsText_FieldSystemPgrms};
static const struct CreditsEntry sCreditsEntry_Features                      = {12,  TRUE, sCreditsText_Programmers};
static const struct CreditsEntry sCreditsEntry_MainGraphicDesigner              = { 7,  TRUE, sCreditsText_MainGraphicDesigner};
static const struct CreditsEntry sCreditsEntry_Tilesets                 = { 9,  TRUE, sCreditsText_GraphicDesigners};
static const struct CreditsEntry sCreditsEntry_PkmnDesigners                    = {10,  TRUE, sCreditsText_PkmnDesigners};
static const struct CreditsEntry sCreditsEntry_BattleSprites                 = {13,  TRUE, sCreditsText_BattleSprites};
static const struct CreditsEntry sCreditsEntry_TrainerSprites        = { 4,  TRUE, sCreditsText_TrainerSprites};
static const struct CreditsEntry sCreditsEntry_OverworldTrainers                    = {11,  TRUE, sCreditsText_OverworldTrainers};
static const struct CreditsEntry sCreditsEntry_OverworldPokemon                     = {11,  TRUE, sCreditsText_OverworldPokemon};
static const struct CreditsEntry sCreditsEntry_UserInterface                         = {13,  TRUE, sCreditsText_UserInterface};
static const struct CreditsEntry sCreditsEntry_CustomMusic                  = {10,  TRUE, sCreditsText_CustomMusic};
static const struct CreditsEntry sCreditsEntry_MapDesigners                     = {11,  TRUE, sCreditsText_MapDesigners};
static const struct CreditsEntry sCreditsEntry_MapDataDesigners                 = { 9,  TRUE, sCreditsText_MapDataDesigners};
static const struct CreditsEntry sCreditsEntry_ParametricDesigners              = { 9,  TRUE, sCreditsText_ParametricDesigners};
static const struct CreditsEntry sCreditsEntry_PokedexText                      = {11,  TRUE, sCreditsText_PokedexText};
static const struct CreditsEntry sCreditsEntry_EnvAndToolPgrms                  = { 6,  TRUE, sCreditsText_EnvAndToolPgrms};
static const struct CreditsEntry sCreditsEntry_NCLProductTesting                = {11,  TRUE, sCreditsText_NCLProductTesting};
static const struct CreditsEntry sCreditsEntry_SpecialThanks                    = {10,  TRUE, sCreditsText_SpecialThanks};
static const struct CreditsEntry sCreditsEntry_NextUp                     = {11,  TRUE, sCreditsText_NextUp};
static const struct CreditsEntry sCreditsEntry_Producers                        = {11,  TRUE, sCreditsText_Producers};
static const struct CreditsEntry sCreditsEntry_ExecProducers                    = { 7,  TRUE, sCreditsText_ExecProducers};
static const struct CreditsEntry sCreditsEntry_InfoSupervisors                  = {10,  TRUE, sCreditsText_InfoSupervisors};
static const struct CreditsEntry sCreditsEntry_TaskManagers                     = { 8,  TRUE, sCreditsText_TaskManagers};
static const struct CreditsEntry sCreditsEntry_BrailleCodeCheck                 = {10,  TRUE, sCreditsText_BrailleCodeCheck};
static const struct CreditsEntry sCreditsEntry_Engine                    = {10,  TRUE, sCreditsText_Engine};
static const struct CreditsEntry sCreditsEntry_BattleFrontierData               = { 8,  TRUE, sCreditsText_BattleFrontierData};
static const struct CreditsEntry sCreditsEntry_SupportProgrammers               = {10,  TRUE, sCreditsText_SupportProgrammers};
static const struct CreditsEntry sCreditsEntry_Artwork                          = {12,  TRUE, sCreditsText_Artwork};
static const struct CreditsEntry sCreditsEntry_DiscordMods                   = {10,  TRUE, sCreditsText_DiscordMods};
static const struct CreditsEntry sCreditsEntry_LeadGraphicArtist                = { 9,  TRUE, sCreditsText_LeadGraphicArtist};
static const struct CreditsEntry sCreditsEntry_SatoshiTajiri                    = {11, FALSE, sCreditsText_SatoshiTajiri};
static const struct CreditsEntry sCreditsEntry_TheyAreSoCool                    = {11, FALSE, sCreditsText_TheyAreSoCool};
static const struct CreditsEntry sCreditsEntry_CactusMV                      = {11, FALSE, sCreditsText_CactusMV};
static const struct CreditsEntry sCreditsEntry_Nemo622                  = {11, FALSE, sCreditsText_Nemo622};
static const struct CreditsEntry sCreditsEntry_FishingMinigame                  = {11, FALSE, sCreditsText_FishingMinigame};
static const struct CreditsEntry sCreditsEntry_PretTeam                    = {11, FALSE, sCreditsText_PretTeam};
static const struct CreditsEntry sCreditsEntry_MiningMinigame                     = {11, FALSE, sCreditsText_MiningMinigame};
static const struct CreditsEntry sCreditsEntry_OverworldEncounters                        = {11, FALSE, sCreditsText_OverworldEncounters};
static const struct CreditsEntry sCreditsEntry_Blizblob                      = {11, FALSE, sCreditsText_Blizblob};
static const struct CreditsEntry sCreditsEntry_Snad                 = {11, FALSE, sCreditsText_Snad};
static const struct CreditsEntry sCreditsEntry_QuestSystem                 = {11, FALSE, sCreditsText_QuestSystem};
static const struct CreditsEntry sCreditsEntry_Dexnav                        = {11, FALSE, sCreditsText_Dexnav};
static const struct CreditsEntry sCreditsEntry_Trey                    = {11, FALSE, sCreditsText_Trey};
static const struct CreditsEntry sCreditsEntry_DayNightSystem                    = {11, FALSE, sCreditsText_DayNightSystem};
static const struct CreditsEntry sCreditsEntry_Missingno                    = {11, FALSE, sCreditsText_Missingno};
static const struct CreditsEntry sCreditsEntry_MoreInDocs                     = {11, FALSE, sCreditsText_MoreInDocs};
static const struct CreditsEntry sCreditsEntry_SageDeoxys                  = {11, FALSE, sCreditsText_SageDeoxys};
static const struct CreditsEntry sCreditsEntry_RomHackingHideout                 = {11, FALSE, sCreditsText_RomHackingHideout};
static const struct CreditsEntry sCreditsEntry_AnimaNel                      = {11, FALSE, sCreditsText_AnimaNel};
static const struct CreditsEntry sCreditsEntry_TrainerDX                    = {11, FALSE, sCreditsText_TrainerDX};
static const struct CreditsEntry sCreditsEntry_Nuukiie                       = {11, FALSE, sCreditsText_Nuukiie};
static const struct CreditsEntry sCreditsEntry_Egg3ggEgg                        = {11, FALSE, sCreditsText_Egg3ggEgg};
static const struct CreditsEntry sCreditsEntry_SirWhibbles                         = {11, FALSE, sCreditsText_SirWhibbles};
static const struct CreditsEntry sCreditsEntry_JunOkutani                       = {11, FALSE, sCreditsText_JunOkutani};
static const struct CreditsEntry sCreditsEntry_AtsukoNishida                    = {11, FALSE, sCreditsText_AtsukoNishida};
static const struct CreditsEntry sCreditsEntry_MuneoSaito                       = {11, FALSE, sCreditsText_MuneoSaito};
static const struct CreditsEntry sCreditsEntry_RenaYoshikawa                    = {11, FALSE, sCreditsText_RenaYoshikawa};
static const struct CreditsEntry sCreditsEntry_COMBOY                       = {11, FALSE, sCreditsText_COMBOY};
static const struct CreditsEntry sCreditsEntry_SupahSanti                     = {11, FALSE, sCreditsText_SupahSanti};
static const struct CreditsEntry sCreditsEntry_EeVeeEe                      = {11, FALSE, sCreditsText_EeVeeEe};
static const struct CreditsEntry sCreditsEntry_LuigiTKO                  = {11, FALSE, sCreditsText_LuigiTKO};
static const struct CreditsEntry sCreditsEntry_MegamanOmega                      = {11, FALSE, sCreditsText_MegamanOmega};
static const struct CreditsEntry sCreditsEntry_Coffee                       = {11, FALSE, sCreditsText_Coffee};
static const struct CreditsEntry sCreditsEntry_TortleDove               = {11, FALSE, sCreditsText_TortleDove};
static const struct CreditsEntry sCreditsEntry_KesterHendrickPixels              = {11, FALSE, sCreditsText_KesterHendrickPixels};
static const struct CreditsEntry sCreditsEntry_MinidexProject                    = {11, FALSE, sCreditsText_MinidexProject};
static const struct CreditsEntry sCreditsEntry_AveonTrainer                 = {11, FALSE, sCreditsText_AveonTrainer};
static const struct CreditsEntry sCreditsEntry_Zezitra               = {11, FALSE, sCreditsText_Zezitra};
static const struct CreditsEntry sCreditsEntry_Solo993                  = {11, FALSE, sCreditsText_Solo993};
static const struct CreditsEntry sCreditsEntry_WhoseSupportMadeThisPossible                    = {11, FALSE, sCreditsText_WhoseSupportMadeThisPossible};
static const struct CreditsEntry sCreditsEntry_KazuyukiTerada                   = {11, FALSE, sCreditsText_KazuyukiTerada};
static const struct CreditsEntry sCreditsEntry_YuriSakurai                      = {11, FALSE, sCreditsText_YuriSakurai};
static const struct CreditsEntry sCreditsEntry_HiromiSagawa                     = {11, FALSE, sCreditsText_HiromiSagawa};
static const struct CreditsEntry sCreditsEntry_MyDiscordAndKoFiCommunity                    = {11, FALSE, sCreditsText_MyDiscordAndKoFiCommunity};
static const struct CreditsEntry sCreditsEntry_YoshioTajiri                     = {11, FALSE, sCreditsText_YoshioTajiri};
static const struct CreditsEntry sCreditsEntry_TeikoSasaki                      = {11, FALSE, sCreditsText_TeikoSasaki};
static const struct CreditsEntry sCreditsEntry_SachikoHamano                    = {11, FALSE, sCreditsText_SachikoHamano};
static const struct CreditsEntry sCreditsEntry_ChieMatsumiya                    = {11, FALSE, sCreditsText_ChieMatsumiya};
static const struct CreditsEntry sCreditsEntry_AkikoShinozaki                   = {11, FALSE, sCreditsText_AkikoShinozaki};
static const struct CreditsEntry sCreditsEntry_AstukoFujii                      = {11, FALSE, sCreditsText_AstukoFujii};
static const struct CreditsEntry sCreditsEntry_OutfitSystem                      = {11, FALSE, sCreditsText_OutfitSystem};
static const struct CreditsEntry sCreditsEntry_Zaebucca                   = {11, FALSE, sCreditsText_Zaebucca};
static const struct CreditsEntry sCreditsEntry_PokemonCrystal                   = {11, FALSE, sCreditsText_PokemonCrystal};
static const struct CreditsEntry sCreditsEntry_YumiFunasaka                     = {11, FALSE, sCreditsText_YumiFunasaka};
static const struct CreditsEntry sCreditsEntry_NaokoYanase                      = {11, FALSE, sCreditsText_NaokoYanase};
static const struct CreditsEntry sCreditsEntry_NCLSuperMarioClub                = {11, FALSE, sCreditsText_NCLSuperMarioClub};
static const struct CreditsEntry sCreditsEntry_AtsushiTada                      = {11, FALSE, sCreditsText_AtsushiTada};
static const struct CreditsEntry sCreditsEntry_IllBeRemakingThe                  = {11, FALSE, sCreditsText_IllBeRemakingThe};
static const struct CreditsEntry sCreditsEntry_AlolaRegionInMy                  = {11, FALSE, sCreditsText_AlolaRegionInMy};
static const struct CreditsEntry sCreditsEntry_HiroNakamura                     = {11, FALSE, sCreditsText_HiroNakamura};
static const struct CreditsEntry sCreditsEntry_HiroyukiUesugi                   = {11, FALSE, sCreditsText_HiroyukiUesugi};
static const struct CreditsEntry sCreditsEntry_TerukiMurakawa                   = {11, FALSE, sCreditsText_TerukiMurakawa};
static const struct CreditsEntry sCreditsEntry_AkiraKinashi                     = {11, FALSE, sCreditsText_AkiraKinashi};
static const struct CreditsEntry sCreditsEntry_TeamAquasHideout                  = {11, FALSE, sCreditsText_TeamAquasHideout};
static const struct CreditsEntry sCreditsEntry_Pawkkie                     = {11, FALSE, sCreditsText_Pawkkie};
static const struct CreditsEntry sCreditsEntry_TakanaoKondo                     = {11, FALSE, sCreditsText_TakanaoKondo};
static const struct CreditsEntry sCreditsEntry_AiMashima                        = {11, FALSE, sCreditsText_AiMashima};
static const struct CreditsEntry sCreditsEntry_GakujiNomoto                     = {11, FALSE, sCreditsText_GakujiNomoto};
static const struct CreditsEntry sCreditsEntry_TakehiroIzushi                   = {11, FALSE, sCreditsText_TakehiroIzushi};
static const struct CreditsEntry sCreditsEntry_HitoshiYamagami                  = {11, FALSE, sCreditsText_HitoshiYamagami};
static const struct CreditsEntry sCreditsEntry_KyokoWatanabe                    = {11, FALSE, sCreditsText_KyokoWatanabe};
static const struct CreditsEntry sCreditsEntry_TakaoNakano                      = {11, FALSE, sCreditsText_TakaoNakano};
static const struct CreditsEntry sCreditsEntry_HiroyukiJinnai                   = {11, FALSE, sCreditsText_HiroyukiJinnai};
static const struct CreditsEntry sCreditsEntry_HiroakiTsuru                     = {11, FALSE, sCreditsText_HiroakiTsuru};
static const struct CreditsEntry sCreditsEntry_TsunekazIshihara                 = {11, FALSE, sCreditsText_TsunekazIshihara};
static const struct CreditsEntry sCreditsEntry_SatoruIwata                      = {11, FALSE, sCreditsText_SatoruIwata};
static const struct CreditsEntry sCreditsEntry_Cecilily                     = {11, FALSE, sCreditsText_Cecilily};
static const struct CreditsEntry sCreditsEntry_SatoshiMitsuhara                 = {11, FALSE, sCreditsText_SatoshiMitsuhara};
static const struct CreditsEntry sCreditsEntry_JapanBrailleLibrary              = { 9, FALSE, sCreditsText_JapanBrailleLibrary};
static const struct CreditsEntry sCreditsEntry_TomotakaKomura                   = {11, FALSE, sCreditsText_TomotakaKomura};
static const struct CreditsEntry sCreditsEntry_TomSanborn                    = {11, FALSE, sCreditsText_TomSanborn};
static const struct CreditsEntry sCreditsEntry_VGMusic                   = {11, FALSE, sCreditsText_VGMusic};
static const struct CreditsEntry sCreditsEntry_KenjiroIto                       = {11, FALSE, sCreditsText_KenjiroIto};
static const struct CreditsEntry sCreditsEntry_ThankYouForPlaying                     = {11, FALSE, sCreditsText_ThankYouForPlaying};
static const struct CreditsEntry sCreditsEntry_SeaglassStyle                   = {11, FALSE, sCreditsText_SeaglassStyle};
static const struct CreditsEntry sCreditsEntry_SachikoNakamichi                 = {11, FALSE, sCreditsText_SachikoNakamichi};
static const struct CreditsEntry sCreditsEntry_FujikoNomura                     = {11, FALSE, sCreditsText_FujikoNomura};
static const struct CreditsEntry sCreditsEntry_KazukiYoshihara                  = {11, FALSE, sCreditsText_KazukiYoshihara};
static const struct CreditsEntry sCreditsEntry_RetsujiNomoto                    = {11, FALSE, sCreditsText_RetsujiNomoto};
static const struct CreditsEntry sCreditsEntry_AzusaTajima                      = {11, FALSE, sCreditsText_AzusaTajima};
static const struct CreditsEntry sCreditsEntry_ShusakuEgami                     = {11, FALSE, sCreditsText_ShusakuEgami};
static const struct CreditsEntry sCreditsEntry_PackageAndManual                 = { 0,  TRUE, sCreditsText_PackageAndManual};
static const struct CreditsEntry sCreditsEntry_EnglishVersion                   = { 0,  TRUE, sCreditsText_EnglishVersion};
static const struct CreditsEntry sCreditsEntry_Translator                       = { 0,  TRUE, sCreditsText_Translator};
static const struct CreditsEntry sCreditsEntry_TextEditor                       = { 0,  TRUE, sCreditsText_TextEditor};
static const struct CreditsEntry sCreditsEntry_NCLCoordinator                   = { 0,  TRUE, sCreditsText_NCLCoordinator};
static const struct CreditsEntry sCreditsEntry_GraphicDesigner                  = { 0,  TRUE, sCreditsText_GraphicDesigner};
static const struct CreditsEntry sCreditsEntry_NOAProductTesting                = { 0,  TRUE, sCreditsText_NOAProductTesting};
static const struct CreditsEntry sCreditsEntry_HideyukiNakajima                 = { 0, FALSE, sCreditsText_HideyukiNakajima};
static const struct CreditsEntry sCreditsEntry_HidenoriSaeki                    = { 0, FALSE, sCreditsText_HidenoriSaeki};
static const struct CreditsEntry sCreditsEntry_YokoWatanabe                     = { 0, FALSE, sCreditsText_YokoWatanabe};
static const struct CreditsEntry sCreditsEntry_SakaeKimura                      = { 0, FALSE, sCreditsText_SakaeKimura};
static const struct CreditsEntry sCreditsEntry_ChiakiShinkai                    = { 0, FALSE, sCreditsText_ChiakiShinkai};
static const struct CreditsEntry sCreditsEntry_SethMcMahill                     = { 0, FALSE, sCreditsText_SethMcMahill};
static const struct CreditsEntry sCreditsEntry_NobOgasawara                     = { 0, FALSE, sCreditsText_NobOgasawara};
static const struct CreditsEntry sCreditsEntry_TeresaLillygren                  = { 0, FALSE, sCreditsText_TeresaLillygren};
static const struct CreditsEntry sCreditsEntry_KimikoNakamichi                  = { 0, FALSE, sCreditsText_KimikoNakamichi};
static const struct CreditsEntry sCreditsEntry_SouichiYamamoto                  = { 0, FALSE, sCreditsText_SouichiYamamoto};
static const struct CreditsEntry sCreditsEntry_YuichiroIto                      = { 0, FALSE, sCreditsText_YuichiroIto};
static const struct CreditsEntry sCreditsEntry_ThomasHertzog                    = { 0, FALSE, sCreditsText_ThomasHertzog};
static const struct CreditsEntry sCreditsEntry_MikaKurosawa                     = { 0, FALSE, sCreditsText_MikaKurosawa};
static const struct CreditsEntry sCreditsEntry_NationalFederationBlind          = { 0, FALSE, sCreditsText_NationalFederationBlind};
static const struct CreditsEntry sCreditsEntry_PatriciaAMaurer                  = { 0, FALSE, sCreditsText_PatriciaAMaurer};
static const struct CreditsEntry sCreditsEntry_EuropeanBlindUnion               = { 0, FALSE, sCreditsText_EuropeanBlindUnion};
static const struct CreditsEntry sCreditsEntry_AustralianBrailleAuthority       = { 0, FALSE, sCreditsText_AustralianBrailleAuthority};
static const struct CreditsEntry sCreditsEntry_RoyalNewZealandFederationBlind   = { 0, FALSE, sCreditsText_RoyalNewZealandFederationBlind};
static const struct CreditsEntry sCreditsEntry_MotoyasuTojima                   = { 0, FALSE, sCreditsText_MotoyasuTojima};
static const struct CreditsEntry sCreditsEntry_NicolaPrattBarlow                = { 0, FALSE, sCreditsText_NicolaPrattBarlow};
static const struct CreditsEntry sCreditsEntry_ShellieDow                       = { 0, FALSE, sCreditsText_ShellieDow};
static const struct CreditsEntry sCreditsEntry_ErikJohnson                      = { 0, FALSE, sCreditsText_ErikJohnson};

#define _ &sCreditsEntry_EmptyString
static const struct CreditsEntry *const sCreditsEntryPointerTable[PAGE_COUNT][ENTRIES_PER_PAGE] =
{
    [PAGE_TITLE] = {
        _,
        &sCreditsEntry_PkmnEmeraldVersion,
        &sCreditsEntry_Credits,
        _,
        _
    },
    [PAGE_DEVELOPER] = {
        _,
        &sCreditsEntry_Developer,
        &sCreditsEntry_Nemo622,
        _,
        _,
    },
    [PAGE_MY_PARTNER] = {
        _,
        &sCreditsEntry_MyPartner,
        &sCreditsEntry_CactusMV,
        &sCreditsEntry_TheyAreSoCool,
        _,
    },
    [PAGE_ENGINE] = {
        _,
        &sCreditsEntry_Engine,
        &sCreditsEntry_PretTeam,
        &sCreditsEntry_RomHackingHideout,
        _,
    },
    [PAGE_DISCORD_MODS] = {
        &sCreditsEntry_DiscordMods,
        &sCreditsEntry_Trey,
        &sCreditsEntry_Missingno,
        &sCreditsEntry_Snad,
        &sCreditsEntry_Blizblob,
    },
    [PAGE_FEATURES_1] = {
        &sCreditsEntry_Features,
        &sCreditsEntry_DayNightSystem,
        &sCreditsEntry_OutfitSystem,
        &sCreditsEntry_OverworldEncounters,
        &sCreditsEntry_QuestSystem,
    },
    [PAGE_FEATURES_2] = {
        &sCreditsEntry_Features,
        &sCreditsEntry_Dexnav,
        &sCreditsEntry_FishingMinigame,
        &sCreditsEntry_MiningMinigame,
        &sCreditsEntry_MoreInDocs,
    },
    [PAGE_TILES_1] = {
        &sCreditsEntry_Tilesets,
        &sCreditsEntry_AnimaNel,
        &sCreditsEntry_Zaebucca,
        &sCreditsEntry_TrainerDX,
        &sCreditsEntry_MoreInDocs,
    },
    [PAGE_BATTLE_SPRITES_1] = {
        &sCreditsEntry_BattleSprites,
        &sCreditsEntry_Egg3ggEgg,
        &sCreditsEntry_SageDeoxys,
        &sCreditsEntry_Nuukiie,
        &sCreditsEntry_SirWhibbles,
    },
    [PAGE_BATTLE_SPRITES_2] = {
        &sCreditsEntry_BattleSprites,
        &sCreditsEntry_COMBOY,
        &sCreditsEntry_Coffee,
        &sCreditsEntry_KesterHendrickPixels,
        &sCreditsEntry_MoreInDocs,
    },
    [PAGE_TRAINER_SPRITES] = {
        &sCreditsEntry_TrainerSprites,
        &sCreditsEntry_Nemo622,
        &sCreditsEntry_TortleDove,
        &sCreditsEntry_Solo993,
        &sCreditsEntry_MoreInDocs,
    },
    [PAGE_OVERWORLD_TRAINERS] = {
        &sCreditsEntry_OverworldTrainers,
        &sCreditsEntry_PokemonCrystal,
        &sCreditsEntry_AnimaNel,
        &sCreditsEntry_KesterHendrickPixels,
        &sCreditsEntry_Nemo622,
    },
    [PAGE_OVERWORLD_POKEMON] = {
        &sCreditsEntry_OverworldPokemon,
        &sCreditsEntry_MegamanOmega,
        &sCreditsEntry_Nemo622,
        &sCreditsEntry_AnimaNel,
        &sCreditsEntry_MoreInDocs,
    },
    [PAGE_USER_INTERFACE] = {
        &sCreditsEntry_UserInterface,
        &sCreditsEntry_EeVeeEe,
        &sCreditsEntry_LuigiTKO,
        &sCreditsEntry_MinidexProject,
        &sCreditsEntry_AveonTrainer,
    },
    [PAGE_USER_INTERFACE_2] = {
        &sCreditsEntry_UserInterface,
        &sCreditsEntry_Nemo622,
        &sCreditsEntry_Zezitra,
        &sCreditsEntry_PokemonCrystal,
        &sCreditsEntry_MoreInDocs,
    },
    
    [PAGE_SPECIAL_THANKS_1] = {
        &sCreditsEntry_CustomMusic,
        &sCreditsEntry_TomSanborn,
        &sCreditsEntry_VGMusic,
        &sCreditsEntry_Pawkkie,
        &sCreditsEntry_MoreInDocs,
    },
    [PAGE_SPECIAL_THANKS_2] = {
        _,
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_MyDiscordAndKoFiCommunity,
        &sCreditsEntry_WhoseSupportMadeThisPossible,
        _,
    },
    [PAGE_SPECIAL_THANKS_3] = {
        &sCreditsEntry_SpecialThanks,
        &sCreditsEntry_RomHackingHideout,
        &sCreditsEntry_TeamAquasHideout,
        &sCreditsEntry_Pawkkie,
        &sCreditsEntry_Cecilily,
    },
    [PAGE_SPECIAL_THANKS_4] = {
        &sCreditsEntry_NextUp,
        &sCreditsEntry_IllBeRemakingThe,
        &sCreditsEntry_AlolaRegionInMy,
        &sCreditsEntry_SeaglassStyle,
        &sCreditsEntry_ThankYouForPlaying,
    },
};
#undef _
