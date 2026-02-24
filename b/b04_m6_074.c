section "b04_m6_074"{
    int var0 = Date_GetDateOption(2, 21);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406074_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's hot. *Phew*...");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406074_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Anyway, it's hot...");
            }
        Message_MsgSel("It's a shower of sunlight!", "I don't like Summer...", "It seems cool in the shade of the trees.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406074_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sorry. I don't agree with that.\nShould we go to the shade?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406074_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's too dazzling! It's too hot!\nI ban that kind of shower!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I would say that I dislike it.\nIf only it were a little cooler...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I would say that I dislike it...\nThis heat is unbearable.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right!\nLet's go and rest for a bit in the\nshade!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right!\nLet's go rest in the shade of a\ntree.\nWhat about over there?");
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
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406074_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Do you want to drink something cold,\nSenpai?");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406074_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, Senpai.\nLet's go and drink something cold.");
            }
        Message_MsgSel("Soda!", "I'm fine.", "Hot red bean soup～");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, that is good.\nI will go and buy two.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You have to drink soda when it's\nhot, don't you?\nIt tastes good going down...\nI'll go and buy it!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI will just go and buy something so\nthat you can drink it when you are\nthirsty.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI'm gonna buy something for you too,\nso wait.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406074_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nImagining that makes me feel hotter\nthan it really is...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406074_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I feel hotter just imagining it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406074_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Please look. The sky is really high.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406074_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's Summer.\nI feel like the sky is really high.");
            }
        Message_MsgSel("The blue sky is like a painting.", "Those clouds look like you.", "The sun is radiant...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So this is what they call an endless\nsky.");
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
                Voice_PlayVoice("B0406074_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah!\nIt's so blue that it's like we'd get\nswallowed.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406074_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Eh, really? Uhh...\nHow exactly does it look like me?...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406074_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... How is it like me? The shape?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406074_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Then the cloud next to it is you,\nSenpai....\nIt really looks like you.");
                Voice_PlayVoice("B0406074_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's round and it's just floating\nthere...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh.........");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406074_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, I'm joking.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406074_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I won't say if it is or isn't like\nyou...\nIsn't it nice though?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406074_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's happily floating......\nIt would be nice if we could be like\nthat.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Are you okay, Senpai?\nIt would be bad if you got anemia,\nso let's walk in the shade.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406074_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Are you okay, Senpai?\nI am feeling the heat, so let's walk\nin the shade.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
