section "b03_m6_160"{
    if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 0)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306160_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I like the game arcade!\nI get curious whenever I'm excited.");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
                }
            Screen_WipeIn(2);
            Voice_PlayVoice("B0306160_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yes, after all, it is a game arcade\nwhere one plays as much as their\nheart desires!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 161);
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 0)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
                }
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306160_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "What shall we do, Senpai?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306160_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, what do you want to do?");
            }
        Message_MsgSel("The arcade sounds good.", "Let's play token games.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_ResumeSkinship();
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306160_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good. I'm quite good!\nI don't lose!");
                }
            else {
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good!\nAnd because I'm pretty good, I'll\nteach you!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 161);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Good. Well then, let's go.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, okay. Well, let's get going!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 162);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 1)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
                }
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306160_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There are various activities, what\ndo you want to do?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
                }
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306160_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is there anything you want to play?");
            }
        Message_MsgSel("How about the arcade?", "Music games sound interesting.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good, let's go for it!");
                }
            else {
                Character_ChFace(1, 0, 10);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "After all, we did come to a game\narcade!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 161);
            break ;
            case 1:
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306160_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good. Let's go!");
                }
            else {
                Voice_PlayVoice("B0306160_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That sounds good! Ah, I'm real good!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 163);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 1)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
                }
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306160_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "There are various things to do,\nwhich one do you want to do?");
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            if (Date_ChkDateOpen(47) == 1){
                Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(46) == 1){
                Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
                }
            else if (Date_ChkDateOpen(44) == 1){
                Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
                }
            else {
                Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
                }
            Screen_WipeIn(2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0306160_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Anything you want to play?");
            }
        Message_MsgSel("How about the game arcade?", "Is a token game good?", "Music games sound interesting.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Good, let's get to it.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "After all, we did come to a game\narcade!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 161);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Okay, good. Well then, let's go.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306160_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, that's good. Then let's go.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 162);
            break ;
            case 2:
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306160_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good. Let's go!");
                }
            else {
                Voice_PlayVoice("B0306160_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "That sounds good! Ah, I'm real good!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 163);
            break ;
            }
        }
    }
