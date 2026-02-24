section "b03_m4_190"{
    if (Date_ChkDateOpen(61) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 3, (#1), 2);
        Character_ChFace(1, 3, 4);
        Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304190_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh*...\nIt's boring trying to get to the\ntop...");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 191);
        }
    else if (Date_ChkDateOpen(62) == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(1, 3, 1);
        Background_Bg_GS2("BG_TR100_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0304190_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Wow, that's cool! It's cold...\nLet's go for now...");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 192);
        }
    }
