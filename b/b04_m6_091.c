section "b04_m6_091"{
    int var0 = Date_GetDateOption(2, 25);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
            Voice_PlayVoice("B0406090_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ehh...\nIt's like we're here on an\nextracurricular lesson.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
            Voice_PlayVoice("B0406090_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Whoa...\nThis place reminds me of\nextracurricular lessons.");
            }
        Message_MsgSel("It feels really historic...", "The designs of the past are interesting!", "This clay figure looks like you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406090_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nNothing really stands out to me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0406090_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? Hmm... I have no clue!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right, there are many things.\nI feel like some of them are still\nbeing used now.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right.\nIt seems like a lot of them are\nstill being used now.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406090_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Is that so?\nDo I make this kind of blank face?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406090_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, right...\nDoesn't it actually look similar to\nyou?\nIt's making a blank expression.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406090_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So this kind of stone tool was used\nto eat in the past.\nI can't believe it...");
            }
        else {
            Voice_PlayVoice("B0406090_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "So they ate food with this kinda\nstone tool back then.\nI can't believe it...");
            }
        Message_MsgSel("I feel the mystery of the ancient past.", "But in terms of design, it's nice.", "I'm glad I was born in the modern era.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406090_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI only think of this as\ninconvenient...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406090_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI only see it as something\ninconvenient.");
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
                Voice_PlayVoice("B0406090_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Now that you say it, you're right!\nIt's actually quite nice and\nrefreshing.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, maybe.\nIt looks refreshing, now that I look\nat it again.");
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
                Voice_PlayVoice("B0406090_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Right.\nIt seems like I wouldn't be able to\nlive in this era.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nI probably wouldn't survive in this\nera.");
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
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_FP_410_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406090_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Apparently, this jewel was something\nthat decorated the queen of this\ntime.");
            }
        else {
            Voice_PlayVoice("B0406090_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This jewel was something that\ndecorated the queen of this time.");
            }
        Message_MsgSel("What an amazing story.", "Maybe the prince was forced to get one?", "The design is a little strange...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It would be nice if someone gave you\none as a present.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Senpai, you looked entranced.\nGirls like this kind of story,\nright?");
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
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha!\nThinking about it, it has the sense\nof kinship.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406090_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha!\nThinking about it, even though it\nmight have been from a prince, it's\nno big deal.");
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
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406090_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nI thought that the design was\namazing...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406090_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? ...\nWhat's strange is your senses,\nSenpai.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406090_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI think that they worried over it a\nlot, so that whoever got it wouldn't\nsay that.\nTo be reminded of their happy face.");
                Voice_PlayVoice("B0406090_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is this fine? Is that bad? ...\nAnd stuff like that.");
                Voice_PlayVoice("B0406090_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "So they can't calm down when buying\nit.\nAnd won't be calm until they give it\nto the other person, and they\nsmile...");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0406090_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you think about things like that,\nSenpai?\nAbout how much I worry...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... ｛Amachi＊＊｝?");
                Voice_PlayVoice("B0406090_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I kind of sympathize with them.\nSorry.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
