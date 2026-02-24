section "i66_g1_000"{
    if (Parameter_GetByParam(6, 52) <= 59){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much～.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_13F", 0);
            Voice_PlayVoice("I6610000_J00000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You've gotten quite used to this.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Toudou＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I6610000_J00100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You have a good memory and you serve\nthe customers well.\nYou're cut out for this job, aren't\nyou?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm... I wonder.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("I6610000_J00200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Yeah, keep this up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay～.\nI was complimented by\n｛Toudou＊＊｝!)");
            }
        else {
            Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I6610000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_BlinkStart(10, 3, (#1));
            Voice_PlayVoice("I6610000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It seems like you've gotten quite\nused to this job, but you're still\nnot that good.");
            Character_BlinkStart(10, 0, (#1));
            Voice_PlayVoice("I6610000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "There are still other things that\nyou must memorize.\nPut your effort into it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\n｛Toudou＊＊｝ is so\nstrict...)");
            }
        Parameter_AddCh1Param(10, 60, 5);
        }
    else if ((Parameter_GetByParam(6, 52) >= 60) && (Parameter_GetByParam(6, 52) <= 89)){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I6610000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You damaged some shelf items, didn't\nyou?\nWe have more stock, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, sorry...!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("I6610000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "That was a rookie mistake...\nIt's not like you. Pay attention.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I messed up. I have to try harder!)");
            }
        else {
            Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_13F", 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("I6610000_J00800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You damaged some shelf items.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, sorry...!");
            Character_BlinkStart(10, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("I6610000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "...\nYou've been awfully air headed\nrecently.");
            Character_BlinkStart(10, 0, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I6610000_J01000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "We don't need unenthusiastic people\nworking here.");
            Character_Chara_GS2(10, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... how strict.\nI have to try harder!)");
            }
        Parameter_AddCh1Param(10, 60, 3);
        }
    else if (Parameter_GetByParam(6, 52) >= 90){
        Background_Bg_GS2("BG_AR600_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(10, 513) != 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_13F", 0);
            Voice_PlayVoice("I6610000_J01100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Even though this job is tough,\nyou're still working here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Toudou＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I6610000_J01200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Aren't you dependable?\nKeep up the good work.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, thanks!");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much!");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_13F", 0);
            Voice_PlayVoice("I6610000_J01300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You're also working quite hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Toudou＊＊｝.");
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("I6610000_J01400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You got the hang on everything in\nhalf a month, even though it usually\ntakes a month.");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("I6610000_J01500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "I was shocked that you actually have\nguts....\nI'm looking forward to see how long\nyou'll keep working here.");
            Character_BlinkStart(10, 3, (#1));
            Voice_PlayVoice("I6610000_J01600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Work hard, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Was I being... complimented?\nAnyway, I'll do my best!)");
            }
        Parameter_AddCh1Param(10, 60, 5);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
