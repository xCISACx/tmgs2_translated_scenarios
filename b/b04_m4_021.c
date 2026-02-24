section "b04_m4_021"{
    int var0 = Date_GetDateOption(2, 1);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0404021_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The view is good here.");
        Message_MsgSel("What a stylish place!", "Is there anything else to do here?", "I'd hate for nature to disappear!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404021_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I guess so.\nBeautiful as always, every time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404021_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'll make something of this place\nwhen I become famous in the future.\nWait until then!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404021_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "When you say it so insistently like\nthat, it's not going to disappear.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404021_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The Brick Pathway does have a nice\natmosphere～.");
        Message_MsgSel("Like a scene from an old movie.", "That garbage can seems to be overflowing.", "A clean pathway does feel good.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404021_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't you think it's like London?\nThis place is cool.\nI'd like to go to London.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404021_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ack! ...\nDon't talk about weird stuff!\nIt's troubling!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404021_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right!\nYou should appreciate the people who\nmaintain the pathway.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404021_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You're walking slow!");
        Message_MsgSel("I want to walk with you longer.", "Let's go at this pace, slow.", "Don't leave me～!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404021_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Explaining it is just useless.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404021_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Me too...");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404021_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "No, wrong, wrong!\nJust now, was a phrase.\nYeah, a phrase!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404021_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "So!");
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404021_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Me too, we completely thought up the\nsame phrase!\nT-That's right... Yes.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Phrase...???");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404021_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Because I want us to walk...\ntogether...");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404021_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Something like that.\nIt's a pretty good idea.");
                Message_Who(0);
                Message_MsgDisp("主人公", "............");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404021_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "W-What...\nDo you have any complaints!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝......?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404021_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Looks like it.\nWe have to fully enjoy the foreign\nfeeling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404021_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Yeah, we have to walk slow.\nSo, let's just walk at this pace.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
