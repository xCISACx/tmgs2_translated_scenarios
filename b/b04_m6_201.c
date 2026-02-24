section "b04_m6_201"{
    int var0 = Date_GetDateOption(2, 15);
    if ((Date_Date_Nanpa() == 1) && (Parameter_GetCh1Param(6, 130) >= 4)){
        System_Call_GS2("B11", "M6", 0);
        Character_Chara_GS2(6, "M6_09F", 0, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        }
    else {
        Character_Chara_GS2(6, "M6_09F", 0);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_WF_530_000", 127, 40);
        System_Call_GS2("B02", "M6", 10);
        }
    if (var0 == 0){
        Character_ChFace(0, 0, 11);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406201_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... The crowd is amazing.");
            }
        else {
            Voice_PlayVoice("B0406201_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Wow... Amazing amount of people.\nIt's very crowded.");
            }
        Message_MsgSel("For the time being, let's swim!", "I want to go to the beach hut.", "Let's nap under the parasol.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI'll wait until it seems a little\nless crowded.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "At this rate, it'll become less\ncrowded when the sun goes down and\nit gets dark.\nBut it can't be helped.");
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
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That sounds good!\nAnd after we go to the beach house,\nwe can come back to the beach!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that sounds nice!\nFried squid, yakisoba, curry and\nrice...\nWhat to choose...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406201_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We went through all of this trouble\nto come to the beach and nap in the\ndaytime?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406201_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "We went through all of this trouble\nto come to the beach, it'd be a\nwaste.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406201_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's hard to get in and swim when\nthere are so many people...");
            }
        else {
            Voice_PlayVoice("B0406201_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's almost not possible to swim\nwhen there are so many people...");
            }
        Message_MsgSel("Let's swim, anyway!", "Let's make a small sand castle.", "We can do beach volleyball.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nI don't see how we can do that.\nComing here was a waste.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If you say so.\nSince we went through all that\ntrouble to come here, we can go over\nthere if it's absolutely necessary.");
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
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406201_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, we are not children...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406201_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I thought we weren't children?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That sounds good!\nWell then, I'll inflate the ball.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, good, good!\nWell then, I'll inflate the ball.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406201_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Various people are at the beach.");
            }
        else {
            Voice_PlayVoice("B0406201_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There are various people at the\nbeach.");
            }
        Message_MsgSel("That child is so cute!", "That woman's sunburn seems to be painful.", "That lifeguard is very tanned!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "There are children playing in the\nsand.\nAre they siblings?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, are those children playing in\nthe sand?\nI wonder if they're related.");
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
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406201_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're observing too much, Senpai!\nHey, don't stare...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406201_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, you're observing too much!\nDon't stare at me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406201_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai.\nAre you worried about that person's\nsituation?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406201_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I wasn't intending on saying it, but\nyour back is bright red...");
                Message_Who(0);
                Message_MsgDisp("主人公", "H-Huh, really?\nBut it would have been okay if you\nhad told me.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406201_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even if I had informed you, you'd\nsay something like, \"Will you rub me\nwith sunscreen?\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406201_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nSomething like that would be\nimpossible.\nTouching Senpai's back...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But, it's not like you're not\nrubbing it on other people,\n｛Amachi＊＊｝...");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406201_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's definitely not okay! ...\nI give up already, today's not\nchanging.\nYes, it's fated!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... how awful...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's true.\nIt's proof that he stands firm every\nday!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_09F", 0, 1, 1, 34);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406201_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Wow, you're right, amazing!\nI wonder if it's from coming to the\nbeach every day?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
