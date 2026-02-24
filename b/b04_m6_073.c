section "b04_m6_073"{
    int var0 = Date_GetDateOption(2, 19);
    Effect_OpenParticle(0);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406073_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa...\nThe cherry blossom petals are\namazing.");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406073_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa... The petals are amazing!");
            }
        Message_MsgSel("Wow, it's very magical.", "It's sad that it doesn't last long.", "Let's remember to take our garbage with us.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it certainly feels that way.\nI am fascinated by it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it's magical and pretty.\nI'm fascinated.");
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
                Voice_PlayVoice("B0406073_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But the cherry blossoms will bloom\nagain next year.");
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah... but they'll bloom next year.\nYou don't have to be so pessimistic.");
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
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406073_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well... Yes...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406073_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're not getting the mood, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406073_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I wonder if the people who came here\nfor flower-viewing are actually\nlooking at the cherry blossoms?");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406073_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You think those people who came for\nflower viewing are actually looking\nat the cherry blossoms?");
            }
        Message_MsgSel("They're just noisy.", "Isn't it fine as long as they're having fun?", "We should look at the cherry blossoms.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406073_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But that in itself looks fun.\nThe food also looks delicious.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406073_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But doesn't it look fun?\nThe food also looks yummy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nIt is like a festival, so enjoying\nit would be better!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, enjoyment comes first, because\nflower viewing is like a festival!");
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
                Voice_PlayVoice("B0406073_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes.\nShould we go and eat dumplings\nafterwards?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nAfter we look, let's go eat\ndumplings.\nThat tea house we saw earlier was\nselling them.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406073_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Why are cherry blossoms this pretty?");
            }
        else if (Parameter_GetCh1Param(6, 130) >= 3){
            Voice_PlayVoice("B0406073_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Cherry blossoms are really pretty.\nI wonder why?");
            }
        Message_MsgSel("It's the magic of the cherry blossom tree.", "I like dumplings more than cherry blossoms.", "Because you are next to them.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Magic.\nHaha, you are a girl after all,\nSenpai.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetCh1Param(6, 130) >= 3){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Magic, huh.\nHaha, I'll leave it alone.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406073_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right! I also like dumplings more!");
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
                Voice_PlayVoice("B0406073_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're onto it, Senpai!\nLet's hurry up and go buy some\ndumplings.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406073_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh...\nDo you mean that I make the cherry\nblossoms look even better?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406073_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So...\nYou mean that I make them look even\nbetter?\nHmph...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) >= 4){
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406073_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right.\nYou also look very pretty, Senpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Eh?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406073_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah!! ... Not!\nI got you confused with the cherry\nblossoms!!");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406073_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh.\n\"Because you're here, the cherry\nblossoms are pretty.\"");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406073_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, kidding!\n\"Senpai makes the cherry blossoms\nlook even better...\"");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406073_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406073_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "F-Forget all of that! Forget it!");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406073_F03000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Have you forgotten?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406073_F03100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... *Sigh*.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's up with\n｛Amachi＊＊｝?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
