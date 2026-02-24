section "h7g_m6_000"{
    Character_ChFace(0, 0, 10);
    Character_Chara_GS2(6, "M6_??F", 0);
    Background_Bg_GS2("BG_HO000_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("", 6, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "｛主人公｝.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
    Voice_PlayVoice("H8G06000_F00000", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "I heard that you won first prize in\na design contest!\nCongrats!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Thanks, ｛Amachi＊＊｝.\nSo you know already.");
    Character_ChFace(0, 2, 0);
    Character_BlinkStart(6, 3, (#1));
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("H8G06000_F00100", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "I saw the clothing you made.\nIt was really cool!\nHey, are you planning to sell it?");
    Message_Who(0);
    Message_MsgDisp("主人公", "(I'm glad that I did my best to\ncomplete the work.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
