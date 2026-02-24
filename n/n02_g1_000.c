section "n02_g1_000"{
    if (Parameter_Test_Check() == 0){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J00000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You're top rank?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, that's right!");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(10, 2, (#1));
            Voice_PlayVoice("N0210000_J00100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "That's really something. Well done.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was praised by\n｛Toudou＊＊｝!\nI'm glad!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J00200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You are top rank?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Yeah...");
            Character_ChFace(0, 3, 2);
            Character_BlinkStart(10, 3, (#1));
            Voice_PlayVoice("N0210000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "The world is coming to an end...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel like I have mixed feelings\nabout this.)");
            }
        }
    else if (Parameter_Test_Check() == 1){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You're pretty high on the rank.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I did my best.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(10, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0210000_J00500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "You did very well.\nI judged you too soon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha, I did it!)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J00600", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Seems you're at the higher ranks.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0210000_J00700", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Every person has their strengths.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... that didn't sound right...!)");
            }
        }
    else if (Parameter_Test_Check() == 2){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J00800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Your results were quite okay.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh? Hardly. I'm in between.");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(10, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("N0210000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "If we were to compare ourselves, we\nwould be like the turtle and the\nmoon.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, I didn't know\n｛Toudou＊＊｝ ranked\nlower...)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J01000", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "It seems as if your results weren't\nthat great.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(10, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("N0210000_J01100", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well, I'm not trying to put you\ndown.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Look who's talking, she's in the\nlow ranks...)");
            }
        }
    else if (Parameter_Test_Check() >= 3){
        if (Parameter_GetCh1Param(10, 513) != 1){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J01200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "How does it feel to have saved\nsomeone?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Saved someone?");
            Character_BlinkStart(10, 3, (#1));
            Voice_PlayVoice("N0210000_J01300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Yes, someone has to be down below\nthe ranks.");
            Character_BlinkStart(10, 0, (#1));
            Voice_PlayVoice("N0210000_J01400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "This is a thankless task we're\ncarried out to do.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(She has a strange way of\nspeaking...)");
            if (Parameter_Test_Check() == 4){
                Character_Chara_GS2(10, "NON");
                }
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(10, "G1_01F", 0);
            Voice_PlayVoice("N0210000_J01500", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "What depressing results...");
            Character_Chara_GS2(10, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... how frustrating.\nLook who's talking, she has the same\nresults as I do!)");
            }
        }
    Parameter_AddCh1Param(10, 86, 1);
    }
