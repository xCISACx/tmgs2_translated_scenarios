section "b02_m4_000"{
    Message_PauseSkinship();
    if (Date_GetDateOption(3) == 13){
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0204000_D02400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hey. Is it possible you're...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, ｛Hariya＊＊｝'s gift!\nI tried it out immediately.");
        Character_ChFace(1, 2, 1);
        Character_ChFace(1, 3, 3);
        Voice_PlayVoice("B0204000_D02500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I really amaze myself!\nMy judgement was right!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, I really am fond of it.");
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 3, (#1), 2);
        Character_ChFace(1, 3, 5);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0204000_D02600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That's good to hear... Looks good.");
        Character_BlinkStart(4, 0, (#1), 2);
        Character_ChFace(1, 2, 1);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0204000_D02700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That's not right!\nWhat I was saying is that I made the\nright choice!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ seems\npleased...\nI think?)");
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if ((Parameter_ChkPlayer(15) == 1) && (Date_Get_Date_Place2() == 5)){
        Character_ChFace(1, 0, 11);
        Voice_PlayVoice("B0204000_D03000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "A yukata...");
        Message_Who(0);
        Message_MsgDisp("主人公", "What do you think?");
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0204000_D03100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You're gorgeous!\nA Japanese feel is nice, too!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?");
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 3, 1);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0204000_D03200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I'm serious!");
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0204000_D03300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nIf other guys saw this, it would be\na total waste.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Great! Wearing it was worth it!)");
        Parameter_AddCh1Param(4, 61, 5);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_GetDateOption(3) == 14){
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("B0204000_D02800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey.\nAre you the type who doesn't care\nabout the way they look?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Why is that?");
        Character_ChFace(1, 2, 5);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0204000_D02900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That's the same outfit you wore last\ntime.\nThe way I see it, it's pretty\nunbelievable.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Oh no! T-This is embarrassing...)");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 2);
        }
    else if (Date_GetDateOption(3) == 8){
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("B0204000_D01600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Amazing! Where did you buy that?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? Is it that amazing?");
        Character_ChFace(1, 2, 5);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0204000_D01700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah, it's amazing.\nI can't even imitate it.\nI mean, I never will.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(This outfit was obviously\nawkward...)");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 2);
        }
    else if (Date_GetDateOption(3) == 6){
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0204000_D01000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey... Are you okay? Are you cold?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?\nI don't think there's anything wrong\nwith it, though.");
        Character_ChFace(1, 2, 1);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0204000_D01100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Huh?\nIn that case, there should never be\na look like that.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh... I may have overdressed...)");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 2);
        }
    else if (Date_GetDateOption(3) == 7){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0204000_D01200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Can't you feel what season it is?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? Why?");
        Character_ChFace(1, 2, 1);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0204000_D01300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Just looking at you makes me cold.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh... I may have underdressed...)");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 2);
        }
    else if (Date_GetDateOption(3) == 9){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 3, (#1), 2);
        Character_ChFace(1, 3, 1);
        Voice_PlayVoice("B0204000_D01400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You're...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? What is it?");
        Character_BlinkStart(4, 0, (#1), 1);
        Character_ChFace(1, 2, 1);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0204000_D01500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You completely misconstrued the idea\nof \"strong personality traits\".\nStart from the beginning.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I should have put more thought into\nit...)");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, #1);
        Parameter_AddCh1Param(4, 62, 2);
        }
    else if (Date_GetDateOption(3) == 5){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0204000_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nDo you usually wear things like\nthat?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, most of the time.");
        Character_BlinkStart(4, 3, (#1), 2);
        Voice_PlayVoice("B0204000_D00900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hmm...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh...\nOther outfits could have been\nbetter...)");
        Parameter_AddCh1Param(4, 61, #1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, 1);
        }
    else if (Date_GetDateOption(3) == 1){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 3);
        Voice_PlayVoice("", 4, "B0204000_D00000");
        Message_Who(4);
        Message_MsgDisp("Hariya", "｛主人公｝... Oh...\nToday's outfit.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, this? Is it weird?");
        Character_ChFace(1, 0, 8);
        Character_ChFace(1, 3, 5);
        Character_ChFace(1, 4, 1);
        Voice_PlayVoice("B0204000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "N-No!\nI'm amazed that it suits you so\nwell.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-You think so?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Great!\n｛Hariya＊＊｝ seems to like\nthis outfit.)");
        Parameter_AddCh1Param(4, 61, 2);
        Parameter_AddCh1Param(4, 60, 1);
        Parameter_AddCh1Param(4, 62, #2);
        }
    else if (Date_GetDateOption(3) == 2){
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 5);
        Voice_PlayVoice("B0204000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh.\nI see, you also wear that kind of\nstuff.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh? This outfit?");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(4, 2, (#1), 2);
        Voice_PlayVoice("B0204000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah.\nWell, it's not that bad, right?\nIt looks like it feels really nice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ seems to like\nthis kind of outfit.)");
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_GetDateOption(3) == 3){
        Character_ChFace(1, 0, 3);
        Voice_PlayVoice("B0204000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Don't you feel different today?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, is that so?\nOh, do you mean this outfit?");
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0204000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah, that.\nThat kind of color looks good on\nyou.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Hariya＊＊｝ likes red.)");
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_GetDateOption(3) == 10){
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0204000_D01800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That outfit! It's the latest trend.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah.\nThis ｛流行服名｝, right?");
        Character_BlinkStart(4, 2, (#1), 2);
        Voice_PlayVoice("B0204000_D01900", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It does suit you nicely.\nYou've done very well.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Great!\nChecking the trends was a good\nthing!)");
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_GetDateOption(3) == 11){
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0204000_D02000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh... That color.\nI've seen a lot of it lately.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, it's the latest trend.");
        Character_BlinkStart(4, 2, (#1), 2);
        Voice_PlayVoice("B0204000_D02100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You've been studying really hard on\nthat.\nIt gives a nice vibe, too.\nI'll praise you on it!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Great!\nI was praised by\n｛Hariya＊＊｝!)");
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_GetDateOption(3) == 12){
        Character_ChFace(1, 0, 10);
        Voice_PlayVoice("B0204000_D02200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, that.");
        Message_Who(0);
        Message_MsgDisp("主人公", "This, ｛流行アクセサリ名｝?");
        Character_BlinkStart(4, 2, (#1), 2);
        Voice_PlayVoice("B0204000_D02300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That's been in the magazines lately.\nNice.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Great! I got admired!)");
        Parameter_AddCh1Param(4, 61, 1);
        Parameter_AddCh1Param(4, 60, 0);
        Parameter_AddCh1Param(4, 62, #1);
        }
    else if (Date_GetDateOption(3) == 0){
        }
    Message_ResumeSkinship();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
