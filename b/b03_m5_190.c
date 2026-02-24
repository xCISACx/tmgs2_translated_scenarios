section "b03_m5_190"{
    if (Date_ChkDateOpen(61) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 6);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Character_ChFace(1, 4, 0);
        Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305190_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's really red and yellow.\nHow beautiful...");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 191);
        }
    else if (Date_ChkDateOpen(62) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1, 35);
        Character_ChFace(1, 0, 10);
        Background_Bg_GS2("BG_TR100_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305190_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The twinkling snow is beautiful.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 192);
        }
    }
