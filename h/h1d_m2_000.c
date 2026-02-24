section "h1d_m2_000"{
    int var0;
    int var1;
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetSysParam(0) != 3){
        if (Parameter_GetSysParam(0) == 1){
            var0 = 25;
            var1 = 50;
            }
        else {
            var0 = 60;
            var1 = 120;
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of training\ncamp.");
        if (Parameter_GetBkParam(1, 52) <= var0){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIf you don't feel like doing it,\nthen don't.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI must try harder when doing my club\nactivities!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Be a little more enthusiastic.\nIf not, the club members' morale\nwill drop.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI must try harder when doing my club\nactivities!)");
                }
            else {
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nYou're wearing yourself out to the\nvery end.\nForcing yourself isn't a good thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI must try harder when doing my club\nactivities!)");
                }
            }
        else if ((Parameter_GetBkParam(1, 52) > var0) && (Parameter_GetBkParam(1, 52) <= var1)){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_15F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Voice_PlayVoice("H1D02000_B00300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It must also be tough being a\nmanager, right?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1D02000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Just knowing that fact is a good\nthing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I improved a little... right?)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Voice_PlayVoice("H1D02000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It seems like you've memorized many\nthings.\nWas this training camp useful?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I improved a little... right?)");
                }
            else {
                Voice_PlayVoice("H1D02000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You were abusing your position.\nBut you helped us out.... Thanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I improved a little... right?)");
                }
            }
        else if (Parameter_GetBkParam(1, 52) > var1){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You helped us out with many things.\nYou've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You've worked hard.\nGo home and rest today and please\nwork hard for us tomorrow, as well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00900", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThanks to you, we could focus on\ntraining.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            }
        }
    else if (0){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of training\ncamp.");
        if (Parameter_GetBkParam(1, 52) <= 60){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIf you don't feel like doing it,\nthen don't.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI must try harder when doing my club\nactivities!)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 8);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Be a little more enthusiastic.\nIf not, the club members' morale\nwill drop.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI must try harder when doing my club\nactivities!)");
                }
            else {
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nYou're wearing yourself out to the\nvery end.\nForcing yourself isn't a good thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI must try harder when doing my club\nactivities!)");
                }
            }
        else if ((Parameter_GetBkParam(1, 52) > 60) && (Parameter_GetBkParam(1, 52) <= 120)){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_15F", 0);
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Voice_PlayVoice("H1D02000_B00300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It must also be tough being a\nmanager, right?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1D02000_B00400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Just knowing that fact is a good\nthing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I improved a little... right?)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Voice_PlayVoice("H1D02000_B00500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It seems like you've memorized many\nthings.\nWas this training camp useful?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I improved a little... right?)");
                }
            else {
                Voice_PlayVoice("H1D02000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You were abusing your position.\nBut you helped us out.... Thanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I improved a little... right?)");
                }
            }
        else if (Parameter_GetBkParam(1, 52) > 120){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You helped us out with many things.\nYou've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You've worked hard.\nGo home and rest today and please\nwork hard for us tomorrow as well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B00900", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThanks to you, we could focus on\ntraining.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Today is the last day of training\ncamp.\nIt's also the last training camp\never...");
        if (Parameter_GetBkParam(1, 52) <= 90){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nEven though it's the last camp, it\nwas sloppy.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1D02000_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's up to the players and manager\nto regulate the camp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried harder...)");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It seems like this last camp was\nbad.");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("H1D02000_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You know not to take the manager\nposition lightly, right?");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1D02000_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... My bad.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1D02000_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It seems like I'll be saying even\nharsher things, so I'll just leave.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried harder...)");
                }
            else {
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "This seemed painful. Are you okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H1D02000_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Working behind the scenes isn't an\neasy job, and we should have\ncooperated a little more...");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H1D02000_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Anyway, you worked hard.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have tried harder...)");
                }
            }
        else if ((Parameter_GetBkParam(1, 52) > 90) && (Parameter_GetBkParam(1, 52) <= 180)){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Even the last training camp was\nhard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1D02000_B02000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThanks for taking care of many\nthings.\nYou've worked hard.");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 3, 4);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Was it a useful training camp?");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Character_BlinkStart(2, 0, (#1));
                Voice_PlayVoice("H1D02000_B02200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIt would be good if we could use\nthis experience somewhere.\nYou've worked hard until the very\nend.");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("", 2, "H1D02000_B02300");
                Message_Who(2);
                Message_MsgDisp("Shiba", "｛主人公｝....\nYou've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝..");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H1D02000_B02400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThanks to you, we could focus on\npracticing....\nThanks.");
                }
            }
        else if (Parameter_GetBkParam(1, 52) > 180){
            if (Parameter_GetCh1Param(2, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B02500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You did your best until the very\nend, without cutting corners.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1D02000_B02600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You helped us out with a lot of\nthings.\nYou've worked hard.");
                }
            else if (Parameter_GetCh1Param(2, 130) == 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B02700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nThanks to you, I think we focused\nquite a lot on baseball at this\ncamp.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("H1D02000_B02800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Us guys are doing our best because\nyou're supporting us and giving us a\nhand.");
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("H1D02000_B02900", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We know that.\nThanks, ｛主人公｝.");
                }
            else {
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_15F", 0);
                Voice_PlayVoice("H1D02000_B03000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nWe've been in your care, manager.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H1D02000_B03100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "The last training camp went quite\nwell.\nI think the other guys think so,\ntoo....\nIt's thanks to you.");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H1D02000_B03200", 2, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Really, thank you...\n｛主人公｝.");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    Parameter_AddCh1Param(2, 60, 5);
    Parameter_AddCh1Param(2, 62, #3);
    }
