section "b04_m3_235"{
    int var0 = Date_GetDateOption(2, 73);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403235_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It is over already.\nThat went by in the blink of an eye.");
        Message_MsgSel("It was going too fast...", "Going around the curves was awesome!", "I'll explain my theory of maximum speed...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, the car that was driving in\nfront of us, right?\nAlthough it is not a public road, it\nwas dangerous.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes!\nIf there's no shakiness, it could go\nsmoothly around the corner.\nFor me, the cornering was\nsatisfying.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("", 3, "B0403235_C00300");
            Message_Who(3);
            Message_MsgDisp("Hikami", "｛主人公｝.\nAlthough many theories have been\nverified, safety comes first.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403235_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nI am sorry, I have always been the\none having fun in the driver's seat.");
        Message_MsgSel("Maybe I should drive next time?", "The passenger seat isn't bad, either!", "I'm relieved knowing that it's you driving.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403235_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, right...\nIt is quite fun being in the\ndriver's seat.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really?\nIf you say that, then I will be able\nto drive without any hesitation.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Haha, really?\nIt is the driver's duty to put the\nsafety of their fellow passengers\nfirst.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403235_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nWhen I am driving like this, it\nmakes me want to get my license and\ndrive on the public roads.");
        Message_MsgSel("You seem like you'll be a fine driver.", "I also want to get my license.", "You, driving a car, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, of course!\nI have the intention to become the\nkind of safe driver that will be an\nexample to others.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSpeaking of which, weren't you not\ndriving a go-cart?\nAlso, you should think about what\nyou will do with it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403235_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nAs if I would want to keep riding\nthe bike that I use to commute to\nschool.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403235_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Is it unexpected?\nSurely, when you say drive, I\ncurrently have the image of only\nriding bikes and go-carts.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah...");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403235_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI have learned various things from\nthis go-cart.");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403235_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Knowledge about safety, speed and\ntechnique.\nDoesn't it mean I am moving on to\nthe next stage?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... \"Next\"?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403235_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Obviously, the stage where I will be\nable to drive a car on a public\nroad!");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403235_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWhen I am used to driving, I'll let\nyou ride in the passenger seat\nagain.\nAnd we will come here to hang out.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, here...?");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403235_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes.\nIf you get used to driving the\ngo-carts here, you'd be able to\nthink about getting your license,\nright?");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403235_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI will definitely make it come true!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It seems like\n｛Hikami＊＊｝'s dreams are\ngetting bigger and bigger...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
