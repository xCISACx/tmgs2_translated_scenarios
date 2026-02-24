section "b04_m6_235"{
    int var0 = Date_GetDateOption(2, 73);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406235_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, interesting!");
            }
        else {
            Voice_PlayVoice("B0406235_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ah, interesting!");
            }
        Message_MsgSel("It was going too fast...", "Going around the curves was awesome!", "I'll explain my theory of maximum speed...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?\nIt wasn't that much of a problem.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so? That speed was average.\nI wanted to accelerate more!");
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
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So, Senpai likes the curves!\nI like driving in straight lines.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Uh-huh!\nI'm happy after I've driven a\nstraight line!");
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
                Voice_PlayVoice("B0406235_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "*Sigh*... Okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406235_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... What will you do to prove it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406235_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "What do you like about go-carts,\nSenpai?");
            }
        else {
            Voice_PlayVoice("B0406235_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, what do you like about\ngo-carts, Senpai?");
            }
        Message_MsgSel("The sound of the engine is the best!", "The second I feel the wind...!", "Getting juice after the drive finishes!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406235_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Er, isn't that a little noisy...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406235_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh!? Well, isn't that noisy?\nI don't understand that feeling...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, well the wind is certainly\npleasant.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai is a poet.\nThe wind certainly is pleasant.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, good!\nI wanted to go get a drink, soon.");
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
                Voice_PlayVoice("B0406235_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, I agree!\nI want to go get a drink soon...\nWhat should we buy?");
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
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406235_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I did it! I'm the best!");
            }
        else {
            Voice_PlayVoice("B0406235_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah! I'm the best!!");
            }
        Message_MsgSel("A-Another game!", "I give up...", "Go a little easy on me～");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, fine. I accept your challenge!");
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
                Voice_PlayVoice("B0406235_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Alright.\nSenpai might be my date, but be\nprepared, because I'm taking this\nseriously!");
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
                Character_ChFace(1, 2, 2);
                Character_ChFace(1, 3, 0);
                Character_ChFace(1, 4, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha... You sound quite serious.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 4, 0);
                Character_ChFace(1, 2, 1);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406235_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Though you weren't even close to me,\nSenpai did well.\nJust practice.");
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
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406235_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A game is a game!\nCorner-cutting is not good.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1), 1);
                Voice_PlayVoice("B0406235_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's no use!\nBecause in the real world, games are\nhard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406235_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nEven considering going easy on\nyou...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406235_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It's nothing!");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406235_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Oh! A two-seated go-cart ride!");
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406235_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay, next race, we're going to war.\nCan you feel your drive and the\nvictory?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, yes.");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406235_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "If I was with Senpai, I could enjoy\nit more too...\nYes, a nice idea!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0406235_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Let's go! Hey, it's starting soon!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
