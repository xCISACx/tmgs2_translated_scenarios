section "q31_g2_000"{
    Message_Who(0);
    Message_MsgDisp("主人公", "Good morning, ｛Onoda＊＊｝!");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(11, "G2_01F", 0);
    Voice_PlayVoice("Q0911000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Good morning.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Umm... I'm sorry. Am I late?");
    Character_ChFace(0, 0, 0);
    Character_BlinkStart(11, 3, (#1));
    Voice_PlayVoice("Q0911000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "No. You still have five minutes.\nI make it a habit to come ten\nminutes before the scheduled time.");
    Message_Who(0);
    Message_MsgDisp("主人公", "I should follow your example...\nWell then, let's go.");
    Character_ChFace(0, 0, 10);
    Character_BlinkStart(11, 2, (#1));
    Voice_PlayVoice("Q0911000_K00200", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Yes. Let's make it a full day today.");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
