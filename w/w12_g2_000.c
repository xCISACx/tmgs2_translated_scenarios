section "w12_g2_000"{
    if (System_GlobalWork(4, 1) == 15){
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(11, 2, (#1), 1);
        Character_Chara_GS2(11, "G2_04F", 0);
        Voice_PlayVoice("W1211000_K00000", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... Very sly.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(11, 3, (#1));
        Voice_PlayVoice("W1211000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Only you...");
        Character_BlinkStart(11, 2, (#1));
        Voice_PlayVoice("W1211000_K00200", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "It's fine.\nPlease do not worry about it.\nExcuse me.");
        Character_Chara_GS2(11, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Is ｛Onoda＊＊｝ angry...?)");
        Parameter_AddCh1Param(11, 60, #2);
        }
    else if (System_GlobalWork(4, 1) == 3){
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(11, "G2_04F", 0);
        Voice_PlayVoice("W1211000_K00300", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I had a good time today.\nIt was the best recreation.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I had fun, too!\nThank you for inviting me.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(11, 2, (#1));
        Voice_PlayVoice("W1211000_K00400", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "It is I who should be saying that.\nThank you.");
        Character_Chara_GS2(11, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Onoda＊＊｝ really seems\nhappy.\nI enjoyed today.)");
        Parameter_AddCh1Param(11, 60, 2);
        }
    else if (System_GlobalWork(4, 1) == 30){
        Character_Chara_GS2(11, "G2_04F", 0);
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("", #1, "W1211000_K00501");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... ｛主人公｝.\nUmm, is there something you want to\nsay to me...?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(11, 2, (#1));
        Voice_PlayVoice("W1211000_K00600", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... No, it's fine.\nMy thoughts just weren't enough.\nGoodbye.");
        Character_Chara_GS2(11, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what's wrong with\n｛Onoda＊＊｝...?)");
        Parameter_AddCh1Param(11, 60, #1);
        }
    else {
        Character_Chara_GS2(11, "G2_04F", 0);
        Voice_PlayVoice("W1211000_K00700", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Today was fun.\nIn addition, we made something out\nof an opportunity like this.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, you're right!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W1211000_K00800", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Well then, let's depart now.\nSee you at school!");
        Character_Chara_GS2(11, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Places like this are nice!)");
        Parameter_AddCh1Param(11, 60, 1);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
