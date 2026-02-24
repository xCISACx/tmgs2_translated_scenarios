section "h3a_m1_000"{
    if (Parameter_GetBkParam(3, 52) >= 320){
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A01000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Winning the inter high school\nchampionship, huh...\nCongrats.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I did it!\nIt was all thanks to you cheering me\non, ｛Saeki＊＊｝!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A01000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... I was just watching!\nIt's because you put in the effort.\nThat's why there were results....\nRight?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(1, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A01000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "And...\nEveryone knows that fact, more than\nyou know it.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("H3A01000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You...\nreally did your best practicing,\ndidn't you?\nYou worked hard.... Congrats.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nTrack and Field Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(1, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A01000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You were close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... I lost.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H3A01000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But it doesn't mean your effort\nwasn't worth anything....\nRight?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A01000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "And...\nEveryone knows that fact, more than\nyou know it.");
            Character_ChFace(0, 0, 8);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H3A01000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "...\nIf there are people who say that\nthey don't know that, I'm gonna tell\nthem off!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A01000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Just competing here is amazing.\nYou've worked hard up until now.\nYou really did your best too, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I stayed in the Track and\nField Club.)");
            }
        }
    Parameter_AddCh1Param(1, 86, 1);
    }
