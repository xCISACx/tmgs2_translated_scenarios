section "h7g_m4_000"{
    Background_Bg_GS2("BG_HO000_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H8G04000_D00000", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Yo, future famous fashion designer!");
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(4, "M4_??F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝.");
    Voice_PlayVoice("H8G04000_D00100", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I heard that you won first prize in\na design contest.\nAwesome!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah! Thanks!");
    Character_BlinkStart(4, 2, (#1));
    Voice_PlayVoice("H8G04000_D00200", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "Design me some stage costumes next\ntime.\nSomething cool, please!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I'm so happy!\nI'm glad that I did my best to\ncomplete the work!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
