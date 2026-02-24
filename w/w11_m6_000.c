section "w11_m6_000"{
    Character_ChFace(0, 2, 0);
    Character_BlinkStart(6, 3, (#1), 1);
    Character_ChFace(0, 3, 3);
    Character_Chara_GS2(6, "M6_??F", 0);
    Voice_PlayVoice("W1106000_F00000", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "I had a blast today!\nI really enjoyed it!");
    Character_BlinkStart(6, 0, (#1));
    Voice_PlayVoice("W1106000_F00100", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Well, that's it for me.\nPlease invite me, again.");
    if (Parameter_GetCh1Param(6, 130) >= 3){
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("W1106000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Bye, Senpai!");
        Character_Chara_GS2(6, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I had a great time playing with\n｛Amachi＊＊｝ today.\nHe's a good kid...)");
        }
    else {
        Character_Chara_GS2(6, "NON");
        }
    Parameter_AddCh1Param(6, 60, 1);
    Parameter_AddCh1Param(6, 62, #1);
    Parameter_AddCh1Param(6, 86, 1);
    }
