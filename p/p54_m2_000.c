section "p54_m2_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5402000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... That was nice.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, you mean the painting was done\nskillfully?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5402000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(2);
            Message_MsgDisp("Shiba", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "H-How was it...?");
            Voice_PlayVoice("P5402000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWere you painting while watching a\nmodel?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5402000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm interested in what you were\nwatching...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have taken the club\nactivities more seriously...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5402000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You did well.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really!?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5402000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5402000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5402000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nHaving it break through at the same\ntime you display it can't be done\neasily....\nWhat were you doing?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken the club\nactivities more seriously...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5402000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", ".....");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5402000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Things like this just hit you.\nI'm impressed.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Shiba＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5402000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Voice_PlayVoice("P5402000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "In an elaborate place, you decided\nthis was a place to cut corners.");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5402000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I understand it more when I look at\nit from a distance.\nEspecially from over here.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I painted it...\nI should have taken the club\nactivities more seriously...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
