section "h4d_m6_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetSysParam(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of training\ncamp.");
        if (Parameter_GetBkParam(4, 52) <= 25){
            Voice_PlayVoice("H4D06000_W00000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "You didn't practice, did you?\nMessing around will trouble\neveryone.\nBe more serious!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
            }
        else if ((Parameter_GetBkParam(4, 52) > 25) && (Parameter_GetBkParam(4, 52) <= 50)){
            Voice_PlayVoice("H4D06000_W00100", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "This has been fruitful.\nPlease keep it up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
            }
        else if (Parameter_GetBkParam(4, 52) > 50){
            Voice_PlayVoice("H4D06000_W00200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Club President", "Your moves have gotten better.\nPlease keep it up!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
            }
        }
    else if (Parameter_GetSysParam(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of training\ncamp.");
        if (Parameter_GetBkParam(4, 52) <= 60){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm...\nWere you not feeling too well,\nSenpai?\nAll you did was mess up...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh～, I have to try harder...)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... That was terrible!\nPlease don't hold us back.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh, I have to try harder...)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Umm.\nIf you are not feeling well, I think\nit's better to speak up.\nMessing up puts everyone in danger.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh, I have to try harder...)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            }
        else if ((Parameter_GetBkParam(4, 52) > 60) && (Parameter_GetBkParam(4, 52) <= 120)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard.\nYour moves were a great help.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard!\nYou were even showing off, weren't\nyou?\nIt seems like you've maintained your\nhonor.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard!\nThe both of us tried our best.\nShould we have a party to celebrate?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            }
        else if (Parameter_GetBkParam(4, 52) > 120){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard.\nYour moves were a great help....\nAs expected of you!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've done good!\nYou were on the ball, Senpai!\nAmazing!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've done well!\nYou really tried your hardest,\nSenpai.\nI look forward to cheering with you\nfrom now on!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "This is the last day of training\ncamp.");
        if (Parameter_GetBkParam(4, 52) <= 90){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard....\nPlease leave things to us from now\non.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh～, I have to try harder...");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Wasn't that terrible!?\nWere you perhaps cutting corners\nbecause it's your last training\ncamp?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh～, I have to try harder...");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've done well....\nWell, it's your last training camp.\nMaybe you're a little tired.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh～, I have to try harder...");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            }
        else if ((Parameter_GetBkParam(4, 52) > 90) && (Parameter_GetBkParam(4, 52) <= 180)){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've done well at your last\ntraining camp.\nYour cheering will be a good\nreference.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked really hard!\nYou were enthusiastic at your last\ntraining camp, weren't you?\nIt was admirable!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard!\nEven though it was your last\ntraining camp, you put in the\neffort....\nThat's admirable.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            }
        else if (Parameter_GetBkParam(4, 52) > 180){
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard at your last\ntraining camp.\nYour cheering became a reference for\nme.\nPlease teach me many things!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've done well! ...\nYou were amazing.\nThough I felt bitter, I also thought\nthat it was expected of you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(6, "M6_01F", 0);
                Voice_PlayVoice("H4D06000_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You've worked hard, Senpai.\nI kinda... don't want to let you go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                Parameter_AddCh1Param(6, 86, 1);
                Parameter_AddCh1Param(6, 60, 5);
                Parameter_AddCh1Param(6, 62, #3);
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
