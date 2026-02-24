section "b04_m6_163"{
    int var0 = Date_GetDateOption(2, 47);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406163_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I really love music games!");
            }
        else {
            Voice_PlayVoice("B0406163_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, music games are great!");
            }
        Message_MsgSel("Music games are fun!", "Can I take pictures of you dancing?", "Can you play, ｛Amachi＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do you also like it, Senpai?\nWell then, let's play it together!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see, Senpai also likes it!\nIf so, are you up for a difficult\none?\nI've always wanted us to try playing\nit together.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 9);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That's... embarassing!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah! Take it with style!");
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
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406163_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You think I can't do it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406163_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... I can do it.\nWhat kind of impression do you have\nof me, Senpai?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406163_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Playing it all by myself for two is\na double play!");
            }
        else {
            Voice_PlayVoice("B0406163_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai, that was a double play not\nlong ago!\nDo you know how to play it by\nyourself for two players?");
            }
        Message_MsgSel("I'm getting dizzy just by observing...", "Awesome! Hey, show me more!", "Maybe I should try too.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It would be troubling if this is\nmaking you dizzy.\nThe next one's going to be a lot\ntougher!");
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
                Voice_PlayVoice("B0406163_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "It would be troubling if this is\nmaking you dizzy.\nThe next one's going be a lot\ntougher!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, I'm going to make up on\nthat arrow on the hidden play!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay, well then, I'm adding in the\nhidden play to make up for that\narrow!\nWatch closely!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A sudden double play is impossible.\nI think it's better to begin playing\nit normally.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "A sudden double play is impossible.\nLet's start off from a single play.");
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
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406163_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai!\nWould you like to try the versus\nmode together?");
            }
        else {
            Voice_PlayVoice("B0406163_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Senpai!\nLet's try the versus mode together.");
            }
        Message_MsgSel("Yeah, sure, sure!", "Maybe I should lay low.", "Show me a brilliant play by ｛Amachi＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm sure that playing this game is a\nlot better than just observing!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, come on!\nLet's begin then!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406163_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see... It could have been fun.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406163_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Huh, how come? ...\nIt could have been fun...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406163_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, that's too bad.\nI've inserted Senpai's coin.\nCome, climb up the stage.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Whaaaat!? Hmmm, well.\nMaybe I should.");
                Voice_PlayVoice("B0406163_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Voice_PlayVoice("B0406163_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I...\nThis is absolutely a good day, I get\nto play with you, Senpai.\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406163_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Oh, even Senpai isn't that good.\nI can still follow the mood, so have\nfaith!\nWell, let's begin!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Even if you say that, I have to try\nmy best.\nSo, please watch!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406163_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Not much of a choice.\nWell, just watch my spectacular play\nclosely!");
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
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
