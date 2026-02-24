section "b03_m1_190"{
    if (Date_ChkDateOpen(61) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0301190_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "So we're going to be scaling the\nmountain, huh.\nIt seems like a long way down...");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 191);
        }
    else if (Date_ChkDateOpen(62) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_TR100_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0301190_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Oh, the snow quality is nice.\nLet's go!");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 192);
        }
    }
