section "w08_m6_000"{
    if ((System_GlobalWork(0, 1) == 68) || (System_GlobalWork(1, 1) == 68) || (System_GlobalWork(2, 1) == 68)){
        Character_Chara_GS2(6, "M6_??F", 0);
        Voice_PlayVoice("W0806000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I love the Roller Coaster!\nI'm really looking forward to it...");
        Parameter_AddCh1Param(6, 61, 3);
        Parameter_AddCh1Param(6, 60, 2);
        Parameter_AddCh1Param(6, 62, #3);
        }
    else if ((System_GlobalWork(0, 1) == 69) || (System_GlobalWork(1, 1) == 69) || (System_GlobalWork(2, 1) == 69)){
        Character_Chara_GS2(6, "M6_??F", 0);
        Voice_PlayVoice("W0806000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "The view from the Ferris Wheel is\nreally nice.\nI'm really happy!");
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        SoundEffect_PlayStream(3, "SS_T_00_231_M00");
        }
    else if ((System_GlobalWork(0, 1) == 73) || (System_GlobalWork(1, 1) == 73) || (System_GlobalWork(2, 1) == 73)){
        Character_Chara_GS2(6, "M6_??F", 0);
        Voice_PlayVoice("W0806000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'm excited to go go-carting!");
        Parameter_AddCh1Param(6, 61, 0);
        Parameter_AddCh1Param(6, 60, #1);
        Parameter_AddCh1Param(6, 62, 1);
        }
    else if ((System_GlobalWork(0, 1) == 71) || (System_GlobalWork(1, 1) == 71) || (System_GlobalWork(2, 1) == 71)){
        Character_Chara_GS2(6, "M6_??F", 0);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("W0806000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "The Haunted House...\nSurely it won't be so bad if I don't\ngo inside, right?");
        Parameter_AddCh1Param(6, 61, #1);
        Parameter_AddCh1Param(6, 60, #3);
        Parameter_AddCh1Param(6, 62, 2);
        }
    else if ((System_GlobalWork(0, 1) == 70) || (System_GlobalWork(1, 1) == 70) || (System_GlobalWork(2, 1) == 70)){
        Character_Chara_GS2(6, "M6_??F", 0);
        Voice_PlayVoice("W0806000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "The Merry-go-round.\nOkay, let's hop on!");
        Parameter_AddCh1Param(6, 61, 2);
        Parameter_AddCh1Param(6, 60, 1);
        Parameter_AddCh1Param(6, 62, #2);
        }
    Character_Chara_GS2(6, "NON");
    }
