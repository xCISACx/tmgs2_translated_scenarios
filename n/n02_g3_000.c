section "n02_g3_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("", #1, "N0212000_L00000");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "｛主人公｝!\nI've heard the news!\nYou're top rank?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Teehee～! Yeah, seems like it!");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("N0212000_L00100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Mama's happy～!\nBringing you up all this time was\nworth it...!");
            Character_BlinkStart(12, 2, (#1));
            Voice_PlayVoice("N0212000_L00200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You'll be a prime minister, if you\ngo on like this!\nYeah, good luck!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha. I'm glad she's pleased!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("N0212000_L00300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You got top rank!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Yeah.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0212000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "But it's about you.\nAre you satisfied by it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Voice_PlayVoice("N0212000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Now forget all the useless stuff and\ntrends!");
            Character_BlinkStart(12, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0212000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's okay to rely solely on\nstudying!\nGo for it, world's number-one girl\nwho doesn't have any charm at all!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("N0212000_L00700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Good luck!");
            Message_Who(0);
            Message_MsgDisp("主人公", "......");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("N0212000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Woah, were you running the show by\nyourself?\nUnfair! Unfair!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? No, I didn't.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("N0212000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "The both of us agreed and vowed to\nstudy together ...");
            Character_BlinkStart(12, 0, (#1));
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("N0212000_L01000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I mean, maybe I should try to study\nmore, too?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("N0212000_L01100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "*Sigh*...\nI will follow your example and try\nharder, too!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Nishimoto＊＊｝ is trying to\npull a funny stunt.)");
            }
        else {
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("N0212000_L01200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It can't be helped...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(12, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0212000_L01300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I'm into trends more than I am\nstudying.");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("N0212000_L01400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Well, in my opinion, there are more\nto things than just studying.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... That didn't sound right.)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("N0212000_L01500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I envy you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Why?");
            Character_BlinkStart(12, 2, (#1));
            Voice_PlayVoice("N0212000_L01600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "With this kind of rank, there's no\none to be scolded by.");
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("N0212000_L01700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "...\nWhen I think about it, it's a darn\ngood rank.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("N0212000_L01800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I'm not mad about your rank.\nI'm cheering you on, \"If you do your\nbest you'll rank even higher next\ntime.\"");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("N0212000_L01900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I'm aiming for that, too!\nFor the next exam!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That reason to aim seems a little\nwrong...)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("N0212000_L02000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's normal.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("N0212000_L02100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Not above, not below...\nWell, it's normal.\nMaybe it's best if you don't stand\nout?");
            Message_Who(0);
            Message_MsgDisp("主人公", "......");
            Character_BlinkStart(12, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0212000_L02200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I think it's better to stay that\nway, really.\nKeep yourself!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... Hmm...\nThat wasn't such an nice nod...)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("N0212000_L02300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Job well done! Acorn～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Acorn...?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0212000_L02400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Look, we have the same results.\nNo difference, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, but...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("N0212000_L02500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Let's get along together from now\non, okay?\nAcorn!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm...\nI wonder if it's really okay to stay\nlike this.)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(12, "NON");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_01F", 0);
            Voice_PlayVoice("N0212000_L02600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It's a 50/50 chance, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Ah... Yeah.");
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0212000_L02700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Okay, I'll try harder.");
            Character_Chara_GS2(12, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm not giving up either!\nMust try harder.)");
            }
        }
    Parameter_AddCh1Param(12, 86, 1);
    }
