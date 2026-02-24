section "q25_g2_000"{
    System_Wait(60);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(11, 3, (#1));
    Character_ChFace(0, 4, 1);
    Character_Chara_GS2(11, "G2_08F", 0);
    Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Oh, ｛Onoda＊＊｝.");
    Voice_PlayVoice("Q2611000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "............");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Onoda＊＊｝? Are you okay?");
    Character_ChFace(0, 0, 11);
    Character_ChFace(0, 4, 1);
    Voice_PlayVoice("Q2611000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "... Hmm? Oh... Y-Yes! I am sorry.\nI was just surprised all of a\nsudden...");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Huh?\nSo that was\n｛Onoda＊＊｝...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
