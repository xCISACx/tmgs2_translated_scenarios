section "b04_m6_071"{
    int var0 = Date_GetDateOption(2, 18);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406071_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "*Phew*... It's hot.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("B0406071_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's hot!");
            }
        Message_MsgSel("The water surface is shining like a gem!", "I want to shower under the fountain.", "I hate the heat and these kinds of days...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're right.\nIt's sparkling so much that it's\nalmost radiant.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, don't look at it.\nYou're sparkling too, Senpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406071_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I understand that feeling, but\nplease don't actually do it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406071_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI get what you mean, but if you\nreally do it, I'm gonna leave.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Me too! It really is hot.\nI feel like I'm already melting...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it feels like I'm melting...\nSo you also hate the heat.\nYou're like me!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406071_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Children are playing in the\nfountain.\nIt seems like it's cool.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406071_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, children are playing in the\nfountain.\nIt seems cool...");
            }
        Message_MsgSel("Playing with water is fun!", "What if you went to go join them?", "It's a bother to the other people.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "When you're that old, you would\nnever get sick of playing in the\nwater.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, you wouldn't get bored of it.\nAnd before you knew it, the sun\nwould be setting.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406071_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I will decline.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406071_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So you think of me as a kid, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406071_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nDo you get annoyed because of the\nheat?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406071_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai...\nI get that the heat is annoying you,\nbut aren't you being childish?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_FP210_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406071_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, look at the fountain!\nThere's a small rainbow there!\nHow pretty...");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406071_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey look at the fountain!\nThere's a small rainbow!\nHow pretty...");
            }
        Message_MsgSel("Yeah, it really is pretty!", "You're prettier, ｛Amachi＊＊｝.", "Rainbows are just a reflection of light.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes! We are lucky today.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, we're lucky to be able to see\na rainbow today!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Surprisingly, you are knowledgeable,\nSenpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406071_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh?\nYou're actually knowledgeable,\nSenpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0406071_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I kind of...\ndon't really feel glad being\ncomplimented....\nSorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0406071_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What the-- Are you making fun of me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406071_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You often say such embarrassing\nthings, don't you?...");
                Voice_PlayVoice("B0406071_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nWell it doesn't feel bad to have you\nsay that to me, Senpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? Thank gosh.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406071_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Hey, Senpai.\nDo you also happen to say these\nthings to other people?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("B0406071_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Before I met you, I was fine with\npeople calling me things like...\npretty or cute.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406071_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But now, I don't want anyone except\nyou to say it to me.\nSo, Senpai...");
                Voice_PlayVoice("B0406071_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I worry, sometimes.\nBecause you're an airhead, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Environment_StopME(1, 40);
    System_Wait(60);
    }
