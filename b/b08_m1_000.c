section "b08_m1_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    var0 = System_GlobalWork(0, 1);
    var1 = Parameter_GetPl1Param(312);
    Character_Chara_GS2(1, "M1_D?F", 0, 1, 1);
    if (var0 == 1){
        Background_Bg_GS2("BG_HO000_?_1", 1, #1, 0);
        }
    else {
        Background_Bg_GS2("BG_HO000_?_2", 1, #1, 0);
        }
    Screen_WipeIn(2);
    var4 = Date_GetDateOption(9);
    if (var0 == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Voice_PlayVoice("B0801000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's fine, it's on my way home-- Hm?");
        Message_PauseSkinship();
        switch (var1){
            case 2:
            System_Call_GS2("B50", "M2", 0);
            break ;
            case 3:
            System_Call_GS2("B50", "M3", 0);
            break ;
            case 4:
            System_Call_GS2("B50", "M4", 0);
            break ;
            case 5:
            System_Call_GS2("B50", "M5", 0);
            break ;
            case 6:
            System_Call_GS2("B50", "M6", 0);
            break ;
            case 7:
            System_Call_GS2("B50", "M7", 0);
            break ;
            case 8:
            System_Call_GS2("B50", "M8", 0);
            break ;
            }
        Voice_PlayVoice("B0801000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Um, uhh...");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0801000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're popular.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Geez! That's not it!");
        Character_Chara_GS2(1, "M1_D?F", 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0801000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It was a joke. Later.");
        Character_Chara_GS2(1, "NON");
        switch (var1){
            case 2:
            System_Call_GS2("B50", "M2", 1);
            break ;
            case 3:
            System_Call_GS2("B50", "M3", 1);
            break ;
            case 4:
            System_Call_GS2("B50", "M4", 1);
            break ;
            case 5:
            System_Call_GS2("B50", "M5", 1);
            break ;
            case 6:
            System_Call_GS2("B50", "M6", 1);
            break ;
            case 7:
            System_Call_GS2("B50", "M7", 1);
            break ;
            case 8:
            System_Call_GS2("B50", "M8", 1);
            break ;
            }
        }
    else if ((var4 == 0) || (var4 == 1)){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(1, "M1_D?F", 0);
        Voice_PlayVoice("B0801000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're welcome....\nI'll see you later.");
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had ｛Saeki＊＊｝ walk me\nhome.)");
        }
    else if (Parameter_GetCh1Param(var4, 62) < 255){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(1, "M1_D?F", 0);
        Voice_PlayVoice("B0801000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're welcome....\nI'll see you later.");
        Character_Chara_GS2(1, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had ｛Saeki＊＊｝ walk me\nhome.)");
        }
    else if ((Parameter_GetCh1Param(var4, 62) > 254) && (Parameter_GetCh1Param(var4, 62) <= 279)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Voice_PlayVoice("B0801000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "No, it's fine...");
        Message_PauseSkinship();
        SoundEffect_PlaySE(19, 127);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0801000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Your phone.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, yeah. Hang on a second.");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        switch (var4){
            case 2:
            System_Call_GS2("B08", "M2", 10);
            Parameter_InCh1Param(2, 553, 58);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 10);
            Parameter_InCh1Param(3, 553, 58);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 10);
            Parameter_InCh1Param(4, 553, 58);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 10);
            Parameter_InCh1Param(5, 553, 58);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 10);
            Parameter_InCh1Param(6, 553, 58);
            break ;
            }
        SoundEffect_PlaySE(20, 127);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0801000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Who was it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_Chara_GS2(1, "M1_D?F", 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0801000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Nothing, it's fine....\nSee you later.");
        Character_Chara_GS2(1, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        SoundEffect_PlayStream(3, "SS_T_00_057_M00");
        int var6 = Parameter_GetPl1Param(12);
        switch (var6){
            case 0:
            Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
            break ;
            case 1:
            Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
            break ;
            case 2:
            Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
            break ;
            case 3:
            Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
            break ;
            }
        Screen_WipeIn(2);
        switch (var4){
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*sigh*...\nWhat a surprise～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll call ｛Shiba＊＊｝\nlater...)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Hikami＊＊｝ soon...\nperhaps.)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*sigh*... What a surprise...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll call ｛Hariya＊＊｝\nlater...)");
            break ;
            case 5:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Chris＊＊｝ soon...\nperhaps.)");
            break ;
            case 6:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Amachi＊＊｝ soon...\nperhaps.)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(var4, 62) > 279){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Voice_PlayVoice("B0801000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's fine, it's on my way home-- Hm?");
        Message_PauseSkinship();
        switch (var4){
            case 2:
            System_Call_GS2("B08", "M2", 11);
            Parameter_InCh1Param(2, 554, 59);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 11);
            Parameter_InCh1Param(3, 554, 59);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 11);
            Parameter_InCh1Param(4, 554, 59);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 11);
            Parameter_InCh1Param(5, 554, 59);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 11);
            Parameter_InCh1Param(6, 554, 59);
            break ;
            }
        Voice_PlayVoice("B0801000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ehh...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Um, uhh...");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0801000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You're popular.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Geez! That's not it!");
        Character_Chara_GS2(1, "M1_D?F", 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0801000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It was a joke. See you later.");
        Character_Chara_GS2(1, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        switch (var4){
            case 2:
            System_Call_GS2("B08", "M2", 1);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 1);
            break ;
            case 4:
            System_Call_GS2("B08", "M4", 1);
            break ;
            case 5:
            System_Call_GS2("B08", "M5", 1);
            break ;
            case 6:
            System_Call_GS2("B08", "M6", 1);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
