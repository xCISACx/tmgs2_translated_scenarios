section "p54_m8_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5408000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "A job well done!\nHimeko-senpai would've also agreed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really!? Thank you.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5408000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That's something... Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Masaki＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5408000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeeeah...\nBetter you had prepared yourself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh!?");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Himeko-senpai is kind of like that,\nin my opinion, though...");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("P5408000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But she would pass out if it was\nher, because it's insanely\nmasculine.\nThat...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have painted it more\nseriously...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5408000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "This looks like it could be\nexhibited in an art gallery.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P5408000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah.\nIt looks like the mermaid will move\nany second now.\nDouble perfect!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Masaki＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5408000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nHuh, you submitted your artwork,\ntoo?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yeah.");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("P5408000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Just a thought from an amateur like\nme, the problem's so obvious, it\nseems like it was done in a rush...");
            Character_BlinkStart(8, 0, (#1));
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P5408000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Or rather, out of the question.\nYou could have done better if you\nhad put in more effort, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken club activities\nmore seriously...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_BlinkStart(8, 2, (#1));
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 8, "P5408000_H01000");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝. That mural...\nAre you submitting that into a\ncompetition?");
            Message_Who(0);
            Message_MsgDisp("主人公", "I don't know...\nThere's no talk of it.");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5408000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It'd be such a waste if it's only to\nbe displayed it here...\nI'm sure you'd get an award with\nthis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Masaki＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5408000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nIt seems like just a part of it is\nturned out to be great...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5408000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Others' actually kept their harmony,\nwhile this one here is just trying\nto act as one!");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("P5408000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "And to add to that, going to the\nextreme....");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...\nI was in charge of that part...");
            Character_BlinkStart(8, 0, (#1));
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P5408000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ooh...... Ooh～......");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5408000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nWeeell, maybe I should roam around\nother classrooms....");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken club activities\nmore seriously...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
