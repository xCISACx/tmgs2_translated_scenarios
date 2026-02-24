section "b04_m6_212"{
    int var0 = Date_GetDateOption(2, 64);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406212_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Cats and dogs are running free.\nHow is it that they aren't fighting?");
            }
        else {
            Voice_PlayVoice("B0406212_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's a free-range here.\nThe cats and dogs aren't fighting.");
            }
        Message_MsgSel("Wah, they're extremely cute▼", "Which do you like, ｛Amachi＊＊｝?", "Won't they get along better if they fight?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406212_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai. I asked you a question.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406212_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Well, they're certainly cute.\nBut, I asked you a question, Senpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Definitely the cats.\nHey, don't they seem so free?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Definitely the cats!\nIt's easy for them to act as they\nwish and I like it, I'm also\ncomfortable with them.");
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
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's what I said.\nShould we fight, too? Ahaha!");
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
                Voice_PlayVoice("B0406212_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I hear that.\nThen, shall we also fight? Aha!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406212_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If I compared dogs and cats, which\none would be better?");
            }
        else {
            Voice_PlayVoice("B0406212_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If I compared dogs and cats, which\none would be better?");
            }
        Message_MsgSel("A charming dog.", "A free unrestrained cat.", "A noisy monkey.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, is that how you see it?\nI, myself, thought it'd be cats.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ha. That's surprising.\nI, myself, thought cats would be\nmore precious.");
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
                Character_ChFace(1, 0, 3);
                Character_BlinkStart(6, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? I'm glad you love cats.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm glad you like cats!\nSenpai understands.");
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
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406212_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I'm sorry, Senpai.\nWhere did a monkey come from?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406212_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nSenpai, where did a monkey come\nfrom?\n*Monkey screech*");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR320_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406212_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ouch! ... Crap.\nThe kitten scratched me...");
            }
        else {
            Voice_PlayVoice("B0406212_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ouch! ...\nCrap, the kitten scratched me...");
            }
        Message_MsgSel("Ah! That naughty cat!", "Maybe you weren't thinking.", "You were hurt!? Show me!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 4);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I'm fine. It was my bad...\nBut, thank you.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 4);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406212_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I'm okay! It was my bad...\nBut, thank you.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(6, 2, (#1), 1);
                Voice_PlayVoice("B0406212_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh... Is that so? I'm sorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406212_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It was my bad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406212_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "P-Please stop treating me like a\nchild.\nIt was my fault...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406212_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nCan you not treat me like a child?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406212_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I''m okay.\nIt wasn't a deep scratch.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406212_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "However!");
                Character_ChFace(0, 7, 0);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406212_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai thought I was seriously hurt,\nso I'll be careful.\nDon't ever rub it in after this.");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay. Be careful.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406212_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nEven though I have nice hands, I'd\nhate for Senpai's hands to get\nscratched.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406212_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Umm, that...\nT-That cat over there is cute!\nLet's go see it, Senpai!");
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
