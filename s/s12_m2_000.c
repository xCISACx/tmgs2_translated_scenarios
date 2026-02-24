section "s12_m2_000"{
    int var0;
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1202000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I'm tired.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nVisiting the shrine this year was\ntough.");
            Character_BlinkStart(2, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1202000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Sitting at home watching TV isn't my\nstyle...");
            Voice_PlayVoice("S1202000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Well, later.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how the new year started.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1202000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "We finally came out of the crowd.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Voice_PlayVoice("S1202000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I put a lot of effort in my prayer.\nTo be honest, I hope it comes true.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...\nWith so many people here, it may be\ntough on God.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1202000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. Well, let's go home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for today.");
                Voice_PlayVoice("S1202000_B00600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No problem.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1202000_B00700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We walked an awful lot.\nWe may be able to sleep soundly\ntoday.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1202000_B00800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'm tired. Later.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how the new year started.)");
                }
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1202000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Are you okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nI was able to properly say a prayer.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1202000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Properly?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.\nWhat about you,\n｛Shiba＊＊｝?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S1202000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI was too worried about the person\nnext to me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1202000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Nothing.... Let's go soon.\nI'll walk you home.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Message_Who(0);
                Message_MsgDisp("主人公", "Thank you for today.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("S1202000_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nI should be the one thanking you.\nSo thanks.");
                Voice_PlayVoice("S1202000_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "My best regards this year.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(A new year begins after this...)");
                }
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 3, (#1));
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1202000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "*Phew*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Are you tired?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1202000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah....\nI'm heading home before I pass out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Be careful on the way home.");
            Voice_PlayVoice("S1202000_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. Later.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(This is how the new year started.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1202000_B01800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That was no ordinary crowd.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it was terrible.");
            Character_BlinkStart(2, 0, (#1));
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1202000_B01900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I almost fell down when you grabbed\nmy arm and pulled on it.\nYou don't have normal strength.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh, I'm sorry...");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1202000_B02000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "*Chuckles* ... Let's go home.\nI'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1202000_B02100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "This ends the visit...\nSchool starts soon.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah. It's real soon.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1202000_B02200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Just a bit longer...\nIt wouldn't be so bad to be away for\nlonger...");
                Message_Who(0);
                Message_MsgDisp("主人公", "*Giggles* Is that so?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("S1202000_B02300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well, I'll go now.... Later.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(This is how the new year started.)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1202000_B02400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "We visited without getting\nseparated.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It was really crowded.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1202000_B02500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.... Let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, okay.");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("S1202000_B02600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You can hold onto my sleeve.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Voice_PlayVoice("S1202000_B02700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't want you getting lost on the\nway back home.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Thank you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1202000_B02800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's already been three years...");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're right.\nWe become third year students in\nApril.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("S1202000_B02900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We have less than a year to spend\ntime with each other...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("S1202000_B03000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Nothing. Well, later.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay. Thank you for today.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I'll be a third year student this\nyear...\nI will do my best!)");
                }
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) <= 2){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 2, (#1));
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "It's almost time to graduate.");
            Voice_PlayVoice("S1202000_B03100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nI'll be relieved if I can\nsuccessfully graduate.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Are you worried?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1202000_B03200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah....\nI prayed to God for help a little\nwhile ago, just to make sure.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I-Is that so?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's almost time for graduation...\nIt went by really fast.)");
            Music_StopBGM(0, 40);
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 2, (#1));
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("S1202000_B03300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "*Phew*... Should we rest for a bit?");
            Message_Who(0);
            Message_MsgDisp("主人公", "No, I'm fine.\nAre you alright,\n｛Shiba＊＊｝?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1202000_B03400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm not alright.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh!?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S1202000_B03500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nI fell and got swept away in the\ncrowd.\nYour feet must have gotten unsteady\nand tired.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(2, 2, (#1));
            Voice_PlayVoice("S1202000_B03600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm kidding.... Let's go home.\nI'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1202000_B03700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... It's almost time.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Voice_PlayVoice("S1202000_B03800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "We graduate soon.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, you're right. It's really soon.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1202000_B03900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It feels like it was a deep three\nyears....\nBecause of you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Voice_PlayVoice("S1202000_B04000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Nothing. Well, later.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay. Thank you for today.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's almost time for graduation...\nIt went by really fast.)");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_??F", 0);
            Background_Bg_GS2("BG_EX140_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝, what did you\npray for?\nYou seemed very serious about it.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("S1202000_B04100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Various things.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Various things? For example?");
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S1202000_B04200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I forgot.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Really?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S1202000_B04300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "My mind does what it feels like\ndoing...\nI'll tell you once I remember.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
            Voice_PlayVoice("S1202000_B04400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Nevermind.... Let's go.\nI'll walk you.");
            Music_StopBGM(0, 40);
            Message_CloseMsg();
            Screen_WipeOut(2);
            Character_Chara_GS2(2, "NON");
            if (Parameter_ChkPlayer(5)){
                var0 = 1;
                }
            else {
                Message_Who(0);
                Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
                Character_ChFace(0, 0, 0);
                Character_Chara_GS2(2, "M2_??F", 0);
                Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
                Screen_WipeIn(2);
                Voice_PlayVoice("S1202000_B04500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "The prayer I said some time ago....\nI'll tell you after it comes true.");
                Message_Who(0);
                Message_MsgDisp("主人公", "After it comes true?");
                Voice_PlayVoice("S1202000_B04600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIt won't come true if I tell you\nnow.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1202000_B04700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I think.... It's up to you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? Me?");
                Voice_PlayVoice("S1202000_B04800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Thanks for today.\nI was able to enjoy myself, thanks\nto you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, I enjoyed myself, too.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("S1202000_B04900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Well, later.");
                Character_Chara_GS2(2, "NON");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It's almost time for graduation...\nIt went by really fast.)");
                }
            }
        }
    switch (var0){
        case 0:
        break ;
        case 1:
        System_Call_GS2("K02", "M2", 10);
        System_Call_GS2("K02", "M2", 20);
        Parameter_InPl1Param(336, #1);
        break ;
        }
    Parameter_AddCh1Param(2, 86, 1);
    Message_CloseMsg();
    Screen_WipeOut(1);
    }
