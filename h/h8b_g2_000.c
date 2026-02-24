section "h8b_g2_000"{
    if (Parameter_GetCh1Param(11, 513) != 1){
        Voice_PlayVoice("", #1, "H7B11000_K00000");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝.\nPlease treat me well.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝!\nIt's finally time for camp.");
        Voice_PlayVoice("H7B11000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Yes. Let's have a productive week!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I look forward to working with\nyou.");
        }
    else {
        Voice_PlayVoice("", #1, "H7B11000_K00200");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝.\nWe'll be together for the week,\nwon't we?");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_01F", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.");
        Voice_PlayVoice("H7B11000_K00300", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "\"Know thy enemy, know thyself and\nyou shall not fear even 100\nbattles!\"\nI... won't lose to you!");
        Character_Chara_GS2(11, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(... I'll do my b-best.)");
        }
    }
