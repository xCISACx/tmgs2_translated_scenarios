section "b04_m6_233"{
    int var0 = Date_GetDateOption(2, 70);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406233_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That was fast.");
            }
        else {
            Voice_PlayVoice("B0406233_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That was fast.");
            }
        Message_MsgSel("I felt like a princess▼", "It was a little embarrassing.", "I wanted to ride the white horse.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nWell, the lighting does sparkle.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, Senpai is so simple.\nBut the ride seemed really nice!\nSurprisingly, I enjoyed it, too.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406233_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, is that so?\nWere you not happy to get on at\nfirst?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406233_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You seemed happy when you suggested\nit and when you got on.\nSenpai seems different now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well. I guess so.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hoping for the prince on the white\nhorse?\nThen we'll ride that next time.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406233_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Mmm... The Merry-go-round...\nis kinda lacking something, isn't\nit?");
            }
        else {
            Voice_PlayVoice("B0406233_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hmm... It was kind of lacking.\nI want them to re-work this\nalready...");
            }
        Message_MsgSel("I would enjoy it way more if it was faster.", "I want to stay on a little longer.", "It'd be better if I had a princess look.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, definitely.\nIt'd be good if the present speed\nwas doubled...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, one might say!\n\"Can it not be operated to double\nthe present speed?\"");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that seems really interesting!\nMaybe someone can lend you a costume\nso you can ride longer.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that seems really interesting!\nIf Senpai is a princess, I'll escort\nyou and appear as the prince.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406233_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, is that so?\nBecause I'm tired after spinning\naround in the same place.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406233_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uhh, so? Even now it's too long.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406233_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "People don't really get on the\nMerry-go-round that much.");
            }
        else {
            Voice_PlayVoice("B0406233_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Merry-go-round is always empty\neven when we go.");
            }
        Message_MsgSel("You may not need to line up.", "Why won't anyone get on?", "I'm happy with the two of us occupying it▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You can say that, again.\nI hate lines.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You can say that, again.\nI hate lines.\nI'll be nice and be respectful.");
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
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I wonder why...?\nMaybe because the movement is\nmonotonous?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406233_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I wonder why?\nMaybe they would if the movement was\nmore complex and slightly different?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406233_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm sorry, Senpai...\nMaybe other people will get on, too?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406233_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Not just us two.\nThere are also a few strange\nJapanese couples to account for,\nSenpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406233_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... You know, Senpai.\nLet's go to a smaller place that can\nbe monopolized by two people.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Smaller... Monopolize?");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406233_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nMore exciting than a\nMerry-go-round...");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406233_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Let's shrink more of the distance\nbetween Senpai and I.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406233_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well?\nI want to be near Senpai more...\nIs that alright?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, umm...\n｛Amachi＊＊｝, that's...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406233_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...... The Roller Coaster.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Huh?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406233_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "One car can be monopolized.\nWith the two of us!");
                Character_BlinkStart(6, 0, (#1));
                Voice_PlayVoice("B0406233_F03000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The seats' are near distance, are\nside by side, and the speed is\nexciting....\nHaha, were you surprised?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(You have a mean heart,\n｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
