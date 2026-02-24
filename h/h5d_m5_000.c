section "h5d_m5_000"{
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
        Message_MsgDisp("主人公", "This is the last day of camp.");
        if (Parameter_GetBkParam(5, 52) <= var0){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was kinda lacking.\nI'll expect great things from you\nfrom now on.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I have to put more effort into my\nclub activities!)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Were you not that interested?\nThe result of this camp is a bit\nsad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I have to put more effort into my\nclub activities!)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wanted to talk to you a little\nmore about the core of painting...\nThat's too bad...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I have to put more effort into my\nclub activities!)");
                }
            }
        else if ((Parameter_GetBkParam(5, 52) > var0) && (Parameter_GetBkParam(5, 52) <= var1)){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Voice_PlayVoice("H5D05000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You worked quite hard this week.\nWon't the results show?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("H5D05000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It seems like you were enjoying\ncamp.\nBecause of that, I've also had a\nplentiful week.\nThanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("H5D05000_E00500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard.\nIt was a plentiful week.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wanted to see you doing your best\npainting...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            }
        else if (Parameter_GetBkParam(5, 52) > var1){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
                Voice_PlayVoice("H5D05000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It seems like you were doing\nadmirably well at camp.\nHave you grasped some techniques?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
                Voice_PlayVoice("H5D05000_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I had fun seeing you develop your\nskills in this short time.\nYou might become the Art Club's\nstar.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
                Voice_PlayVoice("H5D05000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You looked like you had a lot of fun\nat camp.\nIt showed in your paintings...");
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Just watching you made my heart\nrace.\nYou've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            }
        }
    else if (0){
        Message_Who(0);
        Message_MsgDisp("主人公", "This is the last day of camp.");
        if (Parameter_GetBkParam(5, 52) <= 60){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was kinda lacking.\nI'll expect great things from you\nfrom now on.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I have to put more effort into my\nclub activities!)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 0, 9);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Were you not that interested?\nThe result of this camp is a bit\nsad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I have to put more effort into my\nclub activities!)");
                }
            else {
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wanted to talk to you a little\nmore about the core of painting...\nThat's too bad...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I have to put more effort into my\nclub activities!)");
                }
            }
        else if ((Parameter_GetBkParam(5, 52) > 60) && (Parameter_GetBkParam(5, 52) <= 120)){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(5, "M5_01F", 0);
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Voice_PlayVoice("H5D05000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You worked quite hard this week.\nWon't the results show?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("H5D05000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It seems like you were enjoying\ncamp.\nBecause of that, I've also had a\nplentiful week.\nThanks.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            else {
                Voice_PlayVoice("H5D05000_E00500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You've worked hard.\nIt was a plentiful week.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wanted to see you doing your best\npainting...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt looks like I improved a little.)");
                }
            }
        else if (Parameter_GetBkParam(5, 52) > 120){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
                Voice_PlayVoice("H5D05000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It seems like you were doing\nadmirably well at camp.\nHave you grasped some techniques?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
                Voice_PlayVoice("H5D05000_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I had fun seeing you develop your\nskills in this short time.\nYou might become the Art Club's\nstar.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            else {
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
                Voice_PlayVoice("H5D05000_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You looked like you had a lot of fun\nat camp.\nIt showed in your paintings...");
                Character_ChFace(0, 4, 1);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Just watching you made my heart\nrace.\nYou've worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah!\nIt seems like I improved a lot.)");
                }
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "This is the last day of camp.\nIt's my last camp...");
        if (Parameter_GetBkParam(5, 52) <= 90){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "*Sigh*...\nIt was our last camp, too...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have put more effort into\nmy club activities...\nIt was my last camp, too...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was our last camp, but you really\ndidn't achieve anything.\nWere you not feeling well?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have put more effort into\nmy club activities...\nIt was my last camp, too...)");
                }
            else {
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I really didn't see your happy face\nduring camp...");
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("H5D05000_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I wanted to see your smile more...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I should have put more effort into\nmy club activities...\nIt was my last camp, too...)");
                }
            }
        else if ((Parameter_GetBkParam(5, 52) > 90) && (Parameter_GetBkParam(5, 52) <= 180)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Camp is already over.\nIt went by in the blink of an eye～.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5D05000_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It looks like you achieved\nsomething.\nWas it enriching for you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Our last camp... Yeah!\nIt seems like I improved a little.)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Camp was fun.\nIt looks like you improved, too.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E02000", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I received lots of stimulation.\nThanks, ｛主人公｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Our last camp... Yeah!\nIt seems like I improved a little.)");
                }
            else {
                Character_ChFace(0, 0, 10);
                Character_Chara_GS2(5, "M5_01F", 0);
                Voice_PlayVoice("H5D05000_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It was fun painting together.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H5D05000_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It's already our last camp.\nThat's heaps unfortunate...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Our last camp... Yeah!\nIt seems like I improved a little.)");
                }
            }
        else if (Parameter_GetBkParam(5, 52) > 180){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛主人公｝.\nToday is the last day of camp.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5D05000_E02100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "It went by quickly.\nI wanted to paint with you a little\nlonger.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, me too.");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5D05000_E02200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Ah, right.\nHow about we both enter the Art\nCompetition?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5D05000_E02300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm interested in that.\nHey, let's enter the competition\ntogether?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... Maybe I should enter.)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nToday is the last day of camp.");
                Voice_PlayVoice("H5D05000_E02400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, it went by quickly.\nYour skills also skyrocketed...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H5D05000_E02500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Ah, right.\nHow about we both enter the Art\nCompetition?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E02600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "One of your paintings will\ndefinitely do well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... Maybe I should enter.)");
                }
            else {
                Voice_PlayVoice("", 5, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "｛主人公｝.");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(5, "M5_01F", 0);
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nToday is the last day of camp.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H5D05000_E02700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nTime flies by when you're having\nfun...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("H5D05000_E02800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nSeeing you paint was good\nmotivation.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("H5D05000_E02900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Ah, right.\nHow about we both enter the Art\nCompetition?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H5D05000_E03000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "One of your paintings will\ndefinitely do well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(... Maybe I should enter.)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    Parameter_AddCh1Param(5, 60, 5);
    Parameter_AddCh1Param(5, 62, #3);
    }
