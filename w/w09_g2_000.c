section "w09_g2_000"{
    Voice_PlayVoice("W0911000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Umm, is there any reason why you\nmade that decision?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Huh...?");
    Voice_PlayVoice("W0911000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "... No, it's fine. It is nothing.");
    Character_Chara_GS2(11, "NON");
    }
