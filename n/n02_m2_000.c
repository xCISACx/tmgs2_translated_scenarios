section "n02_m2_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Top rank? I see...\nA clever falcon... Surprising.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay! I did my best.)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Wow, top rank.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("N0202000_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I second guessed you.\nAnyway, keep it as top rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nIt was worth studying for!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You... You did your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "In fact, I'm actually surprised,\nmyself.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0202000_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Keep it up.\nI will try my best, as well...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good thing I did my best!)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Wow. You've been studying.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, did my efforts really pay\noff?)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nYou have surprisingly good results.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It's good to steadily try my best.)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I honestly feel that you're doing it\ngradually.\nMaybe I should try to follow your\nexample...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, good thing I made an effort.)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nA rank I expected for you to get.\nI'm convinced.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should try my best from now on.)");
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I see, so-so...\nIt's not a rank to be satisfied\nwith.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have tried a little\nharder...)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What a waste.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("N0202000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I think you need to try a little\nharder.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Okay! I must try harder!)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(2, 130) < 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 3, (#1));
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B01200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIt's not my place to say this, but\nthat's pitiful.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI must try my best to study more!)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(2, "NON");
                }
            }
        else if (Parameter_GetCh1Param(2, 130) == 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B01300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nMaybe it's better to aim a little\nhigher.\nLikewise.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I must try harder...)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(2, "NON");
                }
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Shiba＊＊｝.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1));
            Character_Chara_GS2(2, "M2_01F", 0);
            Voice_PlayVoice("N0202000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's not bad to be in the same rank,\nbut...");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("N0202000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I don't want you to have it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("N0202000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Supplementary lessons.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Hmm, I must study harder from now\non...)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(2, "NON");
                }
            }
        }
    Parameter_AddCh1Param(2, 86, 1);
    }
