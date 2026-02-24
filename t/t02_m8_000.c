section "t02_m8_000"{
    System_GlobalWork(3, 0, 0);
    int var0;
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(8, 559) >= 6){
        Voice_PlayVoice("", 8, "T9908000_H00000");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝.\nYou're pretty late.");
        Screen_WipeIn(3);
        Character_Chara_GS2(8, "M8_06F_WI", 0);
        Message_Who(0);
        Message_MsgDisp("主人公", "Masaki-senpai!! Why are you here...?\nWere you perhaps waiting for me?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("T9908000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Maybe.\nI was wondering what I'd do if you\ndidn't show up.");
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Character_Chara_GS2(8, "NON");
        Still_Pair_Event("EV_08_15", "EV_99_00", 0, 0);
        Music_PlayBGM(0, "MN_C_08_090_D00", 127, 40);
        }
    else {
        Message_CloseMsg();
        Message_MessageWindow(1);
        Message_Text_Color(16);
        Still_Pair_Event("EV_08_15", "EV_99_00", 0, 0);
        Screen_WipeIn(3);
        Music_PlayBGM(0, "MN_C_08_090_D00", 127, 40);
        Message_TextSpeed(8);
        Message_DispMsg(1);
        Voice_PlayVoice("T0208000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... As expected, this place.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nWhat is the matter?");
        Still_StillFace(0, 0, 1);
        Voice_PlayVoice("T0208000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I had something I wanted to ask\nyou...\nso I came looking for you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Me...?)");
        }
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 6, 2);
    Voice_PlayVoice("T0208000_H00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\n*Sigh* So you've pretty much\ngraduated from high school...");
    Still_StillFace(0, 0, 5);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0208000_H00300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "But you haven't changed a bit since\nI met you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "... What do you mean by that?");
    Still_StillFace(0, 0, 7);
    Voice_PlayVoice("T0208000_H00400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Hah.\nLike just then, you get uppity when\nI'm baiting you.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ugh...");
    Still_StillFace(0, 6, 2);
    Voice_PlayVoice("T0208000_H00500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "And when I hit the nail on the head\nlike just then, you feel deflated\nand stuff.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ugh......");
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0208000_H00600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Haha.\nDon't look at me with such hateful\neyes.");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0208000_H00700", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I didn't mean it in a bad way.\nRather...\nit makes me wanna mess around with\nyou.");
    Still_StillFace(0, 0, 7);
    Voice_PlayVoice("T0208000_H00800", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I really thought of you as a sister\nand wanted to protect you.\nBut somewhere along the way...");
    Still_Pair_Event("EV_08_16", "EV_99_00", 1, 1);
    Voice_PlayVoice("T0208000_H00900", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\nI started wondering what you were\ndoing at school and stuff.");
    Still_StillFace(0, 6, 2);
    Voice_PlayVoice("T0208000_H01000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "And I started getting strangely\ncurious about what you were doing\nwhen you weren't at work...");
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0208000_H01100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\nEvery time you talked about stuff I\ndidn't know, our difference in age\nbegan to bother me.");
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0208000_H01200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I thought, \"If I were born a year\nlater, I could've spent time with\nher at school...\"");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
    Still_Pair_Event("EV_08_15", "EV_99_00", 0, 0);
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("T0208000_H01300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "When I thought of stuff like that, I\nfinally realized.");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 1);
    Voice_PlayVoice("T0208000_H01400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "You're not just some cute sister or\njunior that is fun to tease.");
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 6, 0);
    Voice_PlayVoice("T0208000_H01500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Actually...\nI was very worried over whether I\ncould say it or say it well...\nBut I've decided to.");
    Still_StillFace(0, 0, 5);
    Voice_PlayVoice("T0208000_H01600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "It seems like it's just no good when\nyou're not around.");
    Still_Pair_Event("EV_99_00", "EV_08_15", 0, 0);
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("", 8, "T0208000_H01700");
    Message_Who(8);
    Message_MsgDisp("Masaki", "｛主人公｝. I...\nlike you.");
    Voice_PlayVoice("T0208000_H01800", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... I wanna hear your feelings.");
    Message_TextSpeed(#1);
    System_Wait(#60);
    Message_MsgSel("I want to be with you, too.", "(Answer with a kiss.)", "I'm sorry...");
    switch (Message_TextSelect()){
        case 0:
        var0 = 0;
        break ;
        case 1:
        var0 = 2;
        break ;
        case 2:
        var0 = 1;
        break ;
        }
    if (var0 == 2){
        Still_Approach(8, #1, 0, 0, 0, 0);
        if (System_GlobalWork(9, 1) == 1){
            var0 = 3;
            }
        }
    if (var0 != 1){
        Message_TextSpeed(8);
        Still_ApproachEnd();
        if (var0 == 2){
            Still_StillFace(0, 0, 3);
            Voice_PlayVoice("T9908000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "A kiss...?");
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("T9908000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Can I think of it as your answer to\nmy question?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.");
            }
        else if (var0 == 3){
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T9908000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hmm? What?");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's my feelings.\nI thought that if I did it this way,\nyou would be able to realize my\nfeelings...");
            Still_StillFace(0, 0, 4);
            Voice_PlayVoice("T9908000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Meaning you... have always...");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "I want to be with you, too.");
            }
        Still_StillFace(0, 0, 3);
        Voice_PlayVoice("T0208000_H01900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... For real?");
        Message_Who(0);
        Message_MsgDisp("主人公", "...... Yes.");
        Voice_PlayVoice("T0208000_H02000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... You're not teasing me, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha! Should I have teased you?");
        Still_StillFace(0, 6, 2);
        Voice_PlayVoice("T0208000_H02100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "A-As if that'd be alright!\nI thought that I'd be rejected for\nsure, so I'm a little shocked...");
        if (var0 != 0){
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T9908000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I'm beat.\nI got way ahead of things.");
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "......... ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes?");
            Voice_PlayVoice("T9908000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'm thinking of taking the first\nstep here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "The first step?");
            Still_StillFace(0, 0, 2);
            Voice_PlayVoice("T9908000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah.\nThe first step where I come into\ncontact with you for real....\nAccept it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Still_Event("");
            }
        else {
            if (Parameter_GetPl1Param(312) == 8){
                Still_StillFace(0, 0, 6);
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0208000_H02200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nIt also seems like you've forgotten\nabout the kiss...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Eh!? So that was...\na kiss after all?");
                Still_StillFace(0, 0, 4);
                Still_StillFace(0, 6, 1);
                Voice_PlayVoice("T0208000_H02300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "What the-- You didn't realize? ...\nYou really are slow...");
                Still_StillFace(0, 6, 0);
                Voice_PlayVoice("T0208000_H02400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I thought \"Is this perhaps fate?\",\nas well.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I'm s-sorry...");
                }
            Still_StillFace(0, 0, 2);
            Still_StillFace(0, 6, 2);
            Voice_PlayVoice("T0208000_H02500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But... It might have been... fate.");
            Still_StillFace(0, 0, 5);
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T0208000_H02600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "If you hadn't come to work at\nAnneri, nothing would've changed.\nIt's amazing that we could meet.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Still_StillFace(0, 0, 2);
            Still_StillFace(0, 6, 2);
            Voice_PlayVoice("T0208000_H02700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nUntil now, our lives revolved around\nAnneri.\nBut now it revolves around us.");
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T0208000_H02800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Age and seniority has nothing to do\nwith us.\nHow about you stop with the formal\nspeech?");
            Message_Who(0);
            Message_MsgDisp("主人公", "O...Of course!");
            Still_StillFace(0, 0, 5);
            Voice_PlayVoice("T0208000_H02900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I just told you to stop it and here\nyou go replying with, \"Of course!\".");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah.");
            Still_StillFace(0, 0, 2);
            Still_StillFace(0, 6, 1);
            Voice_PlayVoice("T0208000_H03000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, we have time...\nLet's take our time!\nRight, I forgot to say something\nimportant.");
            Still_StillFace(0, 6, 0);
            Voice_PlayVoice("T0208000_H03100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Close your eyes.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? Why?");
            Still_StillFace(0, 0, 1);
            Voice_PlayVoice("T0208000_H03200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Just do it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Still_Event("");
            System_Wait(30);
            Voice_PlayVoice("T0208000_H03300", #1, "T0208000_H03301");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Congratulations on graduating....\nKeep treating me well from now on.");
            }
        Music_StopBGM(0, 40);
        if (Parameter_GetPl1Param(312) == 8){
            }
        else {
            }
        Message_CloseMsg();
        Still_Event("EV_08_17", #1, 1, 60);
        Screen_WipeIn(2);
        System_Wait(120);
        Still_Event("EV_08_17", #1, 0, 60, 0, 1);
        Still_StillFace(0, 5, 1);
        System_Wait(40);
        System_Wait(120);
        Screen_WipeOut(3);
        System_GlobalWork(3, 0, 80);
        }
    else {
        Message_TextSpeed(8);
        Still_ApproachEnd();
        Music_StopBGM(0, 40);
        Message_Who(0);
        Message_MsgDisp("主人公", "I'm sorry...");
        Still_StillFace(0, 0, 6);
        Voice_PlayVoice("T0208000_H03400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... I see......\nI guess I couldn't escape from this\n\"senior\" position...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, ｛Masaki＊＊｝...");
        Still_StillFace(0, 0, 4);
        Music_PlayBGM(0, "MN_C_08_000_D00", 127, 40);
        Voice_PlayVoice("T0208000_H03500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Ah～ ... My bad.\nYou don't have to worry about me.");
        Still_StillFace(0, 0, 5);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0208000_H03600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Even so, it might be hard...\nBut I feel refreshed.");
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0208000_H03700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I feel jolly just by saying it! ...\nHmm? Is \"Jolly\" an obsolete word?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha.\nWell, people surely don't use it\noften...");
        Still_StillFace(0, 0, 2);
        Voice_PlayVoice("T0208000_H03800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Hmm.\nIf you can laugh, then it means that\nyou're fine...\nright?");
        Message_Who(0);
        Message_MsgDisp("主人公", "............ Yes.");
        Still_StillFace(0, 0, 0);
        Still_StillFace(0, 6, 1);
        Voice_PlayVoice("T0208000_H03900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Alright, good response.\nI'll give you a flower stamp as a\nreward.\nThe first and last one...");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
        Still_StillFace(0, 6, 0);
        Voice_PlayVoice("T0208000_H04000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Now, it's about time I go～!\nAh, right.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes?");
        Still_StillFace(0, 0, 7);
        Voice_PlayVoice("T0208000_H04100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You're my cute junior.\nYou better remember that it's the\nonly thing that won't change!");
        Still_StillFace(0, 0, 0);
        Voice_PlayVoice("T0208000_H04200", 8, "T0208000_H04201");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Later, ｛主人公｝.\nTake care!");
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        Screen_WipeOut(3);
        System_GlobalWork(0, 2, 1);
        System_GlobalWork(3, 0, 81);
        }
    Screen_ClearScreen();
    Message_TextSpeed(#1);
    Parameter_AddCh1Param(8, 86, 1);
    if (var0 != 1){
        if (Parameter_GetPl1Param(312) == 8){
            Parameter_InCh1Param(8, 307, 1);
            }
        else {
            Parameter_InCh1Param(8, 306, 1);
            }
        if (Parameter_GetCh1Param(8, 559) >= 6){
            if (Parameter_GetPl1Param(312) == 8){
                Parameter_InCh1Param(8, 307, 2);
                }
            else {
                Parameter_InCh1Param(8, 306, 2);
                }
            }
        if (Parameter_GetPl1Param(312) == 8){
            Parameter_InCh1Param(8, 305, 2);
            if (var0 == 0){
                Parameter_InCh1Param(8, 301, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(8, 301, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(8, 301, 3);
                }
            }
        else {
            Parameter_InCh1Param(8, 305, 1);
            if (var0 == 0){
                Parameter_InCh1Param(8, 300, 1);
                }
            else if (var0 == 2){
                Parameter_InCh1Param(8, 300, 2);
                }
            else if (var0 == 3){
                Parameter_InCh1Param(8, 300, 3);
                }
            }
        }
    }
