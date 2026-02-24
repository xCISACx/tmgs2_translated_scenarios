section "b08_m2_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    var0 = System_GlobalWork(0, 1);
    var1 = Parameter_GetPl1Param(312);
    Character_Chara_GS2(2, "M2_D?F", 0, 1, 1);
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
        Voice_PlayVoice("B0802000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Don't worry about it. When.........\nHm?");
        Message_PauseSkinship();
        switch (var1){
            case 1:
            System_Call_GS2("B50", "M1", 0);
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
        Voice_PlayVoice("B0802000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "......... What was that about?");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Uhh... I'll ask him later.");
        Voice_PlayVoice("B0802000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Right. He looked kinda troubled.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah...\nSo, I'll see you later at school!");
        Character_Chara_GS2(2, "M2_D?F", 0);
        Character_ChFace(1, 2, 1);
        Character_BlinkStart(2, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0802000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... You're acting kinda weird, too.\nLater.");
        Character_Chara_GS2(2, "NON");
        switch (var1){
            case 1:
            System_Call_GS2("B50", "M1", 1);
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
    else if ((var4 == 0) || (var4 == 2)){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(2, "M2_D?F", 0);
        Voice_PlayVoice("B0802000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's fine... Later.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had ｛Shiba＊＊｝ walk me\nhome.)");
        }
    else if (Parameter_GetCh1Param(var4, 62) < 255){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(2, "M2_D?F", 0);
        Voice_PlayVoice("B0802000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's fine... Later.");
        Character_Chara_GS2(2, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had ｛Shiba＊＊｝ walk me\nhome.)");
        }
    else if ((Parameter_GetCh1Param(var4, 62) > 254) && (Parameter_GetCh1Param(var4, 62) <= 279)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home,\n｛Shiba＊＊｝.");
        Voice_PlayVoice("B0802000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Don't worry about it. Now then...");
        Message_PauseSkinship();
        SoundEffect_PlaySE(19, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, hang on a second.");
        SoundEffect_StopSE(19, 0);
        SoundEffect_PlaySE(20, 127);
        switch (var4){
            case 1:
            System_Call_GS2("B08", "M1", 10);
            Parameter_InCh1Param(1, 553, 58);
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
        Voice_PlayVoice("B0802000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "......... What's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(1, 0, 9);
        Voice_PlayVoice("B0802000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You look troubled.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah... Nothing, it's fine.\nS-So, I'll see you later at school!");
        Character_Chara_GS2(2, "M2_D?F", 0);
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0802000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...? Yeah.");
        Character_Chara_GS2(2, "NON");
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
            case 1:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Saeki＊＊｝ soon...\nperhaps...)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Hikami＊＊｝ soon...\nperhaps.)");
            break ;
            case 4:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a surprise～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'll call ｛Hariya＊＊｝\nlater...)");
            break ;
            case 5:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Chris＊＊｝ soon...\nperhaps.)");
            break ;
            case 6:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～!)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Amachi＊＊｝ soon...\nperhaps.)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(var4, 62) > 279){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Voice_PlayVoice("B0802000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Don't worry about it. When.........\nHm?");
        Message_PauseSkinship();
        switch (var4){
            case 1:
            System_Call_GS2("B08", "M1", 11);
            Parameter_InCh1Param(1, 554, 59);
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
        Voice_PlayVoice("B0802000_B00600", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "......... What was that about?");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Uhh... I'll ask him later.");
        Voice_PlayVoice("B0802000_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Right. He looked kinda troubled.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah...\nSo, I'll see you later at school!");
        Character_Chara_GS2(2, "M2_D?F", 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0802000_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... You're acting kinda weird, too.\nLater.");
        Character_Chara_GS2(2, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        switch (var4){
            case 1:
            System_Call_GS2("B08", "M1", 1);
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
