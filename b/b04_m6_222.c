section "b04_m6_222"{
    int var0 = Date_GetDateOption(2, 67);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR420_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406222_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This scenery is interesting, as well\nas different from the Sky Garden's.");
            }
        else {
            Voice_PlayVoice("B0406222_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "This is an entirely different\nscenery than the Sky Garden I saw,\nit's excellent!");
            }
        Message_MsgSel("It feels like we've captured the world!", "I wonder what the past view was like.", "Your legs are trembling, ｛Amachi＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha! You could say that.");
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
                Voice_PlayVoice("B0406222_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's an exaggeration.\nBut I understand that feeling!");
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
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "By what means?\nThe olden days have passed, it's not\npossible to imagine it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made a okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Wouldn't you be seeing the same\nhorizon in the olden days that you\nsee now?\nThe air would probably be cleaner\nthen though.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made a okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406222_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes? I can handle high places.\nI wasn't trembling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406222_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Are you making fun of me, Senpai?\nI can handle high places.\nBad luck, you didn't fool me!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406222_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Castle Tower was very\ninteresting.");
            }
        else {
            Voice_PlayVoice("B0406222_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Castle Tower was very\ninteresting!");
            }
        Message_MsgSel("There was probably a secret door.", "It was hard to climb up the stairs.", "It's an old-fashioned building.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, now that you mention it!\nWe should look for it when we come\nnext time!");
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
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, maybe!\nLet's look for it the next time\nwe're here.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
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
                Voice_PlayVoice("B0406222_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "The stairs were steep.\nIt might be serious for old people\ntoo.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made a okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You shouldn't say that it was hard\nto climb, Senpai.\nUnless you exercise a little!");
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
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406222_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nI think it's natural for it to be\nold, since it's a castle...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406222_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You know this is a castle, right?\nIt's natural for it to be old.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 2){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406222_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Castle Tower used to be a place\nfor battle...");
            }
        else {
            Voice_PlayVoice("B0406222_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Castle Tower used to be a place\nfor battle...");
            }
        Message_MsgSel("It was good the country suppressed it!", "Such sad history...", "All worldly things are transitory.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, Senpai, suppressed!\nHowever, it's definitely not such a\nsuppressed place now.");
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
                Voice_PlayVoice("B0406222_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ahaha, Senpai, suppressed!\nHowever, it's definitely not such a\nsuppressed place now.");
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
                Voice_PlayVoice("B0406222_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes.\nBut such things are necessary to\nknow.");
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Message_PauseSkinship();
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made a okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406222_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah.\nBut there is no disadvantage to\nknowing such things.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made a okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406222_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well... I don't understand, Senpai.\nWhat's the meaning of the words you\nsaid?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406222_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nSenpai, I don't understand the\nmeaning of the words, \"All worldly\nthings are transitory\".");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406222_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "All worldly things are transitory...\nSure, that may be so.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Do you, by chance, know the meaning,\n｛Amachi＊＊｝?");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406222_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't understand, why did Senpai\nuse it?\nIt's careless.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406222_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Everything in the world changes.\nIt can't not change.");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406222_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... It's true.\nFor a while, it was as it is, it was\nvery impossible...");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406222_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, I'm sorry. It's nothing.\nLet's enjoy it now!");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406222_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Being together with Senpai, this\nway...\nThat alone is an amazing thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
