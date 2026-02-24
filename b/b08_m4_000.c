section "b08_m4_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    var0 = System_GlobalWork(0, 1);
    var1 = Parameter_GetPl1Param(312);
    Character_Chara_GS2(4, "M4_D?F", 0, 1, 1);
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
        Message_MsgDisp("主人公", "Thanks for walking me home,\n｛Hariya＊＊｝.");
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 4);
        Voice_PlayVoice("B0804000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I don't need you to say thanks for\nsomething like this.\nAnyway, I... huh?");
        Message_PauseSkinship();
        switch (var1){
            case 1:
            System_Call_GS2("B50", "M1", 0);
            break ;
            case 2:
            System_Call_GS2("B50", "M2", 0);
            break ;
            case 3:
            System_Call_GS2("B50", "M3", 0);
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
        Character_ChFace(1, 0, 9);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0804000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hey.\nIs it okay to leave him alone?\nHe looked pretty serious.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah...\nI think it should be fine...");
        Character_Chara_GS2(4, "M4_D?F", 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0804000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nIf you got his contact details, call\nhim right away.\nLater.");
        Character_Chara_GS2(4, "NON");
        switch (var1){
            case 1:
            System_Call_GS2("B50", "M1", 1);
            break ;
            case 2:
            System_Call_GS2("B50", "M2", 1);
            break ;
            case 3:
            System_Call_GS2("B50", "M3", 1);
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
    else if ((var4 == 0) || (var4 == 4)){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(4, "M4_D?F", 0);
        Voice_PlayVoice("B0804000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is nothing!\nNo need to thank me.");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("B0804000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So I'll see you later.");
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ walked me\nhome.)");
        }
    else if (Parameter_GetCh1Param(var4, 62) < 255){
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home.");
        Message_SkinshipSet(0);
        Message_PauseSkinship();
        Character_Chara_GS2(4, "M4_D?F", 0);
        Voice_PlayVoice("B0804000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is nothing!\nNo need to thank me.");
        Character_BlinkStart(4, 2, (#1));
        Voice_PlayVoice("B0804000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "So I'll see you later.");
        Character_Chara_GS2(4, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ walked me\nhome.)");
        }
    else if ((Parameter_GetCh1Param(var4, 62) > 254) && (Parameter_GetCh1Param(var4, 62) <= 279)){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home,\n｛Hariya＊＊｝.");
        Voice_PlayVoice("B0804000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "This is nothing! So...");
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
            case 2:
            System_Call_GS2("B08", "M2", 10);
            Parameter_InCh1Param(2, 553, 58);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 10);
            Parameter_InCh1Param(3, 553, 58);
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
        Character_ChFace(1, 4, 0);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0804000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Everything okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? Yes, everything is fine...");
        Character_ChFace(1, 0, 9);
        Voice_PlayVoice("B0804000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Doesn't seem like it.\nIf something's up, tell me right\naway.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah. Umm...\nthanks for walking me home.\nGood night!");
        Character_Chara_GS2(4, "M4_D?F", 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0804000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Yeah.");
        Character_Chara_GS2(4, "NON");
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
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Saeki＊＊｝ soon...)");
            break ;
            case 2:
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... What a surprise...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Shiba＊＊｝ soon...)");
            break ;
            case 3:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Hikami＊＊｝ soon...)");
            break ;
            case 5:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Chris＊＊｝ soon...)");
            break ;
            case 6:
            Message_Who(0);
            Message_MsgDisp("主人公", "(T-That was surprising～)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(But...\nThings would get sour if I don't\ncall ｛Amachi＊＊｝ soon...)");
            break ;
            }
        }
    else if (Parameter_GetCh1Param(var4, 62) > 279){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for walking me home,\n｛Hariya＊＊｝.");
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 4);
        Voice_PlayVoice("B0804000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I don't need you to say thanks for\nsomething like this.\nAnyway, I... huh?");
        Message_PauseSkinship();
        switch (var4){
            case 1:
            System_Call_GS2("B08", "M1", 11);
            Parameter_InCh1Param(1, 554, 59);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 11);
            Parameter_InCh1Param(2, 554, 59);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 11);
            Parameter_InCh1Param(3, 554, 59);
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
        Character_ChFace(1, 0, 9);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0804000_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hey.\nIs it okay to leave him alone?\nHe had a very serious face on.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah...\nI think it should be fine...");
        Character_Chara_GS2(4, "M4_D?F", 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0804000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nIf you got his contact details, call\nhim right away.\nLater.");
        Character_Chara_GS2(4, "NON");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        switch (var4){
            case 1:
            System_Call_GS2("B08", "M1", 1);
            break ;
            case 2:
            System_Call_GS2("B08", "M2", 1);
            break ;
            case 3:
            System_Call_GS2("B08", "M3", 1);
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
