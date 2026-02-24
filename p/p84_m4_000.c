section "p84_m4_000"{
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_17F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry to keep you waiting,\n｛Hariya＊＊｝!\nHere are the 100 double-sided\ncopies.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Thanks... Oh, it's in color, too!\nHow thoughtful of you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ehehe, really?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P7404000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I forgot to tell you to do it in\ncolor so I didn't have much hope...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7404000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright, I'll treat you to some\njuice later!\nThanks!");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, I was complimented by\n｛Hariya＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_17F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry to keep you waiting,\n｛Hariya＊＊｝!\nHere are the 100 copies.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P7404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... They're not double-sided.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... Ah, you're right!");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7404000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I knew it'd be a lot so I told you\nto make it double-sided...\nThese can't be used at all.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P7404000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Whatever, I'll use these. Later.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh... I messed up, big time...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        Background_Bg_GS2("BG_SCA80_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Here are the pushpins!\nThis note has the necessary\ninformation on it, so please read it\nfirst.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7404000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Huh, you're managing things well.\nDid you make this note?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, if I didn't, people wouldn't\nunderstand how much to use.");
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P7404000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm...");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P7404000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I can respect people who take care\nof every little thing.\nI'm saying that you're that type of\nperson.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P7404000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm seeing you in a new light.\nLater!");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha, I was complimented by\n｛Hariya＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, the pushpins...\nThat's strange, I should have some.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7404000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh yeah, that guy from the other\nclass took a whole bunch of them.");
            Message_Who(0);
            Message_MsgDisp("主人公", "\"Whole bunch\"?\nDid he take them all...");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7404000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "About ten boxes. How much is left?");
            Message_Who(0);
            Message_MsgDisp("主人公", "That was probably... all of it?");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("P7404000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "\"Probably\"?\nYou're too careless at managing\nthings.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7404000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't worry about the pushpins.\nI'll find another way. Later.");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... That was a huge failure...)");
            }
        }
    else {
        Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank goodness! We found her mother.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P7404000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nEven so, you found her mom very\nfast.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7404000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You did a school-wide announcement\nand made fliers!\nYou did well!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P7404000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm praising you.\nYour reward is juice!\nI'll treat you to it later!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ehehe, I was complimented by\n｛Hariya＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(4, "M4_01F", 0);
            Voice_PlayVoice("P7404000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Poor girl.\nShe was bawling her eyes out.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yeah...");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P7404000_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Her mom finally came when the girl\nwas tired from all the crying and\nfell asleep～...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("P7404000_D01900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Wouldn't her mom have come earlier\nif you weren't so slow and were a\nlittle more skilled?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Y-Yes... Of course...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh～* What a huge failure...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
