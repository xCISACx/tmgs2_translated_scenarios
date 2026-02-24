section "b04_m6_151"{
    int var0 = Date_GetDateOption(2, 43);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406151_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, let's begin.");
            }
        else {
            Voice_PlayVoice("B0406151_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, let's begin.");
            }
        Message_MsgSel("I'd like for you to teach me how to bowl.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm rather unconfident on teaching\nsomeone...\nBut if that's what you'd like.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh, Senpai, you're not that\nconfident?\nI-It's fine, I'll teach you!\nI want to see how you throw.\nSo, you go first!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sure!\nSo, I have to play it for real.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Nice!\nIf Senpai's my opponent I won't have\nto even strain my hand!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406151_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You're wrong!\nEven though it's just a game, it has\nto be taken seriously.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406151_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You don't get it.\nEven though it's just a game, it\nwon't be fun if it's not played\nseriously.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406151_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Aaah... in the gutter.");
            }
        else {
            Voice_PlayVoice("B0406151_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Aaah, in the gutter.");
            }
        Message_MsgSel("Don't mind it, you can get it the next time.", "Is it because your position is bad?", "Yeah, a poor throw.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, I'll do my best.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah! I'm going for the spare!");
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
                Voice_PlayVoice("B0406151_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is that so?...\nAround my friends, they say that I'm\none of the best...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406151_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", ".....\nI wish to see Senpai's example.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, psychological attacks?\nI won't fall for provocations!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 1);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Psychological attacks?\nThat's bad, but I won't fall for\nprovocations like that.");
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
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406151_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "One more pin to go, then I'll win!");
            }
        else {
            Voice_PlayVoice("B0406151_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Okay!\nOne more pin to go then I'll win!");
            }
        Message_MsgSel("Gutter! Gutter!", "Don't go easy on me, go with full force!", "If you defeat me our friendship is over!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm not shaken by words like that.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I never intended to throw it on\npurpose, that would be boring,\nright?\nThat's why I'm going for real.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "As suspected, Senpai!\nYou do know the zest of competition.\nWell then, I'm going for real.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406151_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Oh, you said it!\nWell then, I'm giving it my all!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406151_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "E-Ending it...!? Now I'm worried...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406151_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Well then, let's stop.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406151_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... That's fine, it's nothing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0406151_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm aiming for a strike....\nI'll never let it miss.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Ummm, ｛Amachi＊＊｝...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406151_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I'm kidding.\nJust joking, Senpai...\nDon't say you'll end our friendship.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay... I'm sorry.");
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406151_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I'm sorry too.\nWell then, let's continue!");
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
