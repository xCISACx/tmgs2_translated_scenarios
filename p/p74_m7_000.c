section "p74_m7_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good! It was a success...)");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "P8407000_G00000");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, good job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nHow was it?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8407000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, it was very good.\nBoth the model and the clothes were\ndoubly perfect.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aaah, I fell down. Big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("P8407000_G00200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You fell.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh... ｛Wakaouji＊＊｝.");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8407000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I remember everyone's clothes, but I\nought to have remembered all of your\nfaces.\nExtraordinary impression.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh, an impression like that is\nbad...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good! It managed to succeed.)");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("P8407000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Good job, mademoiselle.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nHow was it?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8407000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "It was very beautiful.\nI wanted you to dance to that tune.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aaah, I fell down. Big mistake...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(7, 2, (#1));
            Voice_PlayVoice("P8407000_G00600", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You made a strong dress.\nNo matter how many times you fell\ndown, it did not tear.\nAs expected.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uuggh, I didn't want to show\nsomething like that to happen...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it! Huge success!)");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!");
            Voice_PlayVoice("P8407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Very beautiful.\nSensei wanted to stand with the\naudience.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8407000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You see, this white coat looks like\na frock coat....\nCan you tell?");
            Message_Who(0);
            Message_MsgDisp("主人公", "That... I guess so?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8407000_G00900", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "That's not good.\nWell then, next time I will make\npreparations for the real thing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(Aaah, I fell down. Big mistake...)");
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8407000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hey, you....\nThe model turned out to be a\ncomedian.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8407000_G01100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "You and Sensei could be a comedy\nduo.\nWe'll be this comedian couple.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ and I thrown\ntogether as a comedian duo...?)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
