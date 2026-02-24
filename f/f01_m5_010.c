section "f01_m5_010"{
    Character_BlinkStart(5, 1, (#1), 1);
    Character_BlinkStart(5, 1, (#1), 2);
    Character_ChFace(0, 0, 0);
    Character_ChFace(1, 0, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
    if (Parameter_GetCh1Param(5, 130) >= 4){
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("F0105000_E05200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, ｛Chris＊＊｝.\nAre you going home now?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("F0105000_E05300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", ".........\nMaybe there really is a God.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("F0105000_E05400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I thought that it would be amazing\nif I had bumped into you.");
        Voice_PlayVoice("F0105000_E05500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "...\nHey, do you wanna walk home\ntogether?\nI have a lot of things I wanna talk\nabout.");
        }
    else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
        if (Parameter_GetCh1Param(5, 130) <= 2){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("", 5, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nAre you going home now?");
            Voice_PlayVoice("F0105000_E04800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nAh, if you're going home too, do you\nwanna walk home together?");
            }
        else if (Parameter_GetCh1Param(5, 130) == 3){
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("", 5, "F0105000_E04900");
            Message_Who(5);
            Message_MsgDisp("Chris", "｛主人公｝.\nAre you going to go home now?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Are you as well,\n｛Chris＊＊｝?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0105000_E05000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nIt was lucky that I could meet you\nat this time.");
            Voice_PlayVoice("F0105000_E05100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hey, do you wanna walk home\ntogether?");
            }
        }
    else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝.\nAre you going home now?");
        Voice_PlayVoice("F0105000_E05600", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What's wrong?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("F0105000_E05700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I was calculating the timing for\nwhen I bump into your forehead.\nAs expected, it's no good if it's\nnot sudden.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("F0105000_E05800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, the time has finally come.\nDo you wanna walk home together?");
        }
    Message_MsgSel("Yeah, let's walk home together.", "Let's swing by the cafe first then.", "Sorry, I have something to do today.");
    switch (Message_TextSelect()){
        case 0:
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0105000_E06400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Thank goodness～.\nThis is true: I was wondering what\nI'd do if you had refused.");
            Voice_PlayVoice("F0105000_E06500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, let's take our time going\nhome.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, let's go.");
            Parameter_InCh1Param(5, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0105000_E05900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Then I'll escort you properly.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, please.");
                Voice_PlayVoice("F0105000_E06000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Leave it to me. Now then, let's go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0105000_E06100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yay.\nHey, since we're walking home\ntogether, should we be reckless?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Reckless?");
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("F0105000_E06200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You don't have to look at me with\nsuch misty eyes...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0105000_E06300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Now then, let's go.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                }
            }
        else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("F0105000_E06600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Lucky. Now then, let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Parameter_InCh1Param(5, 548, 53);
            }
        Parameter_AddCh1Param(5, 60, 2);
        Parameter_AddCh1Param(5, 62, #2);
        Parameter_AddCh1Param(#1, 62, 2);
        Music_StopBGM(0, 40);
        System_Call_GS2("F02", "M5", 0);
        break ;
        case 1:
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0105000_E07100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, I'm so happy....\nBut if we go out for tea, I won't\nwanna go home straight away.\nIs that okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's fine.");
            Voice_PlayVoice("F0105000_E07200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, let's go.");
            Parameter_InCh1Param(5, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0105000_E06700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That's a nice idea.\nHaving tea with girls is fun, so I\nlike it.");
                Voice_PlayVoice("F0105000_E06800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Now then, let's go.");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("F0105000_E06900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That sounds good.\nI'm going to listen to everything\nyou say, okay?\nSo talk about anything you want.");
                Voice_PlayVoice("F0105000_E07000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Now then, let's go.");
                }
            }
        else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("F0105000_E07300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, okay.\nIt will be the start of a fun\ntea-time.");
            Voice_PlayVoice("F0105000_E07400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, let's go.");
            Parameter_InCh1Param(5, 548, 53);
            }
        Parameter_AddCh1Param(5, 60, 4);
        Parameter_AddCh1Param(5, 62, #4);
        Parameter_AddCh1Param(#1, 62, 4);
        Music_StopBGM(0, 40);
        System_Call_GS2("F03", "M5", 0);
        break ;
        case 2:
        if (Parameter_GetCh1Param(5, 130) >= 4){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("F0105000_E07800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... Really?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah... Sorry.");
            Voice_PlayVoice("F0105000_E07900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "How unexpected.\nI'll do my best to ask you sooner\nnext time...");
            Voice_PlayVoice("F0105000_E08000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, I'll see you later...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0105000_E08100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, take care going home, so that\nyou don't run into any wolves.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(5, 548, 53);
            }
        else if ((Parameter_GetPl1Param(312) != 5) || (Parameter_GetCh1Param(5, 548) == 1)){
            if (Parameter_GetCh1Param(5, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("F0105000_E07500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I see... That's too bad.\nNow then, I'll see you later.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("F0105000_E07600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I see. Unlucky.\nBut it can't be helped.");
                Voice_PlayVoice("F0105000_E07700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Now then, I'll see you later～.\nGood bye～.");
                Music_StopBGM(0, 40);
                Character_Chara_GS2(5, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Even though he asked me, I rejected\nhim.\nPerhaps that was a bad thing to\ndo...)");
                }
            }
        else if ((Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 548) == 0)){
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("F0105000_E08200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah... Sorry.");
            Voice_PlayVoice("F0105000_E08300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then let's do a farewell bump...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("F0105000_E08400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "We can't? Then I'll stop.");
            Voice_PlayVoice("F0105000_E08500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Now then, see you later～.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That surprised me...\nBut even though he asked me, I\nrejected him.\nPerhaps that was a bad thing to\ndo...)");
            Parameter_InCh1Param(5, 548, 53);
            }
        Parameter_AddCh1Param(5, 62, 4);
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
