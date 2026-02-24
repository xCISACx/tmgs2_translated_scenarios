section "o03_g2_010"{
    if (Parameter_GetCh1Param(11, 130) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "I need a partner.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_08F", 0);
        Voice_PlayVoice("", 11, "O0311000_K00000");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝.\nAre you looking for a partner?\nIs it okay if you pair with me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!");
        Voice_PlayVoice("O0311000_K00100", 11, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Please treat me well,\n｛主人公｝.");
        }
    else if (Parameter_GetCh1Param(11, 130) >= 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "I need a partner.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_08F", 0);
        Voice_PlayVoice("", 11, "O0311000_K00200");
        Message_Who(11);
        Message_MsgDisp("Onoda", "｛主人公｝!\nI was looking for you!\nExcuse me, will you partner together\nwith me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! Let's go for it!");
        Voice_PlayVoice("O0311000_K00300", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I am glad!\nLet's try our hardest to do our\nbest.");
        }
    Message_CloseMsg();
    Character_Chara_GS2(11, "NON");
    }
