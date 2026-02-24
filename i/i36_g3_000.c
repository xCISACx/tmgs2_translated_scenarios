section "i36_g3_000"{
    if (Parameter_GetByParam(3, 52) <= 59){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I3612000_L00000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You've gotten quite good at setting\nout the cakes, haven't you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, really?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("I3612000_L00100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Yeah, it's really smooth.\nIt looks real nice! Good, it's good!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented. I'm so glad!)");
            }
        else {
            Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I3612000_L00200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "... Your way of setting out cakes...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("I3612000_L00300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It looks like you've gotten better.\nYour way of setting it out looks\npretty!");
            Character_BlinkStart(12, 0, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I3612000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "... It's actually 3mm off, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "3-3mm?");
            Character_BlinkStart(12, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I3612000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "The big difference between you and\nme is those 3mm!");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("I3612000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You've gotten better and the cakes\nlook pretty, but you didn't win\nbecause of these 3mm!\nRemember it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "O-Okay...");
            Character_Chara_GS2(12, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Where exactly is it 3mm off...?)");
            }
        Parameter_AddCh1Param(12, 60, 5);
        }
    else if ((Parameter_GetByParam(3, 52) >= 60) && (Parameter_GetByParam(3, 52) <= 89)){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", #1, "I3612000_L00700");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "｛主人公｝.\nDid you place an order for those\ncakes like I asked you to?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "It just escaped my mind.\nI'll call them right away!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I3612000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Well, I do that sometimes too.\nBe careful from now on.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks.");
            }
        else {
            Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I3612000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Hey, did you order the cakes like I\nasked you to?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, sorry...!");
            Character_BlinkStart(12, 2, (#1));
            Voice_PlayVoice("I3612000_L01000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Eh, have you been slacking off\nlately?\nYou've been making a lot of mistakes\nlately.");
            Character_BlinkStart(12, 0, (#1));
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I3612000_L01100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Well, be careful next time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...)");
            }
        Parameter_AddCh1Param(12, 60, 3);
        }
    else if (Parameter_GetByParam(3, 52) >= 90){
        if (Parameter_GetCh1Param(12, 513) != 1){
            Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(12, "G3_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I3612000_L01200", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Whoa, what's with you...!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, what's up?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("I3612000_L01300", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Didn't you wrap it all up really\nquickly just then?\nI couldn't even see your hands!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... Was it that fast?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("I3612000_L01400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "W-Whoa! That's really cool. Ahaha!\nI'm impressed.");
            Character_BlinkStart(12, 3, (#1));
            Voice_PlayVoice("I3612000_L01500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "You're a pro already.\nYou can join a championship or\nsomething!\nAmazing!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ahaha... Thanks.");
            }
        else {
            Background_Bg_GS2("BG_AR300_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(12, "G3_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I3612000_L01600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Whoa, what's with you...!?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh, what's wrong?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("I3612000_L01700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Didn't you wrap it all up really\nquickly just then?\nI couldn't even see your hands!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... Was it that fast?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("I3612000_L01800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "This is too cool!\nAren't you kinda good at this!?\nYou're amazing...");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Really?");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I3612000_L01900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Cut it out!");
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I3612000_L02000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "...\nI mean, just how good do you plan to\nbe at this job?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uh...\nI wasn't being complimented now, was\nI...?)");
            }
        Parameter_AddCh1Param(12, 60, 5);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
