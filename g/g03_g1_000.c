section "g03_g1_000"{
    Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("", #1, "G0310000_J00000");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Can I have a minute,\n｛主人公｝?");
    Character_Chara_GS2(10, "G1_01F", 0);
    Message_Who(0);
    Message_MsgDisp("主人公", "Huh?");
    Voice_PlayVoice("G0310000_J00100", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "You're a double crosser, aren't you?");
    Character_BlinkStart(10, 3, (#1));
    Character_ChFace(0, 3, 2);
    Voice_PlayVoice("G0310000_J00200", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "I...... trusted you.");
    Character_ChFace(0, 0, 8);
    Voice_PlayVoice("G0310000_J00300", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "That's all I wanted to say. Bye.");
    Character_Chara_GS2(10, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "............\n｛Toudou＊＊｝......");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
