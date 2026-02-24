section "o03_g3_010"{
    if (Parameter_GetCh1Param(12, 130) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "I need a partner.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(12, "G3_08F", 0);
        Voice_PlayVoice("", 12, "O0312000_L00000");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "｛主人公｝.\nAre you still looking for a partner?\nThen would you like to join me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah! Thank you.");
        Voice_PlayVoice("O0312000_L00100", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "Let's go swiftly with care!\nOur goal's to be number 1!");
        }
    else if (Parameter_GetCh1Param(12, 130) >= 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "I need a partner.");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(12, "G3_08F", 0);
        Voice_PlayVoice("O0312000_L00200", 12, "O0312000_L00201");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "I've been looking for you,\n｛主人公｝～!\nWould you like to team up together?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay! I'm happy!");
        Voice_PlayVoice("O0312000_L00300", #1, "");
        Message_Who(12);
        Message_MsgDisp("Nishimoto", "With you, I feel like we're going to\nnail it!\nLet's do this!");
        }
    Message_CloseMsg();
    Character_Chara_GS2(12, "NON");
    }
