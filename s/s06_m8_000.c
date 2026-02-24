section "s06_m8_000"{
    Background_Bg_GS2("BG_HO100_?_0", 1, #1, 0);
    System_Wait(10);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(3, "SS_T_00_038_M00");
    System_Wait(120);
    SoundEffect_PlayStream(3, "SEQ_SE_EV_138");
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(8, "M8_??F", 0);
    if (Parameter_GetCh1Param(8, 130) <= 2){
        Voice_PlayVoice("S0608000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hey. Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "*Giggles* Happy New Year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("S0608000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Oh.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm... Do I look weird?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S0608000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh～... Kimono magic.\nI see you're rather more mature than\nusual.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...\nAre you saying I'm normally like a\nkid?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0608000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hahaha, just as I thought, you\nhaven't changed.\nWell, let's go.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great!\nHe seemed to have liked it a\nlittle.)");
            }
        else {
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("S0608000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well then, off we go.");
            }
        }
    else if (Parameter_GetCh1Param(8, 130) == 3){
        Voice_PlayVoice("S0608000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hey. Happy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0608000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Wow, that's nice. A kimono.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("S0608000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hey, try to stay quiet for the day\nor your true nature might show.\nIf you do, it'd be a perfect double\ncircle!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0608000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'm just kidding!\nYou really are easy to tease...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Great! He seemed to like it!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0608000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Okay. So, let's go.");
            }
        }
    else {
        Voice_PlayVoice("", 8, "S0608000_H01000");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝.\nHappy New Year.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Happy New Year.");
        if (Parameter_ChkPlayer(16) == 1){
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0608000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", ".........");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝? What's wrong?");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0608000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, nothing. Nevermind.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Do I look weird?");
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("S0608000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "No... How should I say this...\nI never thought you'd be in a kimono\nwhen I came.\nI think... I was thrown off guard.");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("S0608000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... It's no good.\nI can't look at you～......\nThis is your junior. Your junior...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(What's up with\n｛Masaki＊＊｝?\nAnyway, it's a good thing he seems\nquite pleased...)");
            }
        else {
            Character_ChFace(0, 0, 0);
            Voice_PlayVoice("S0608000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Okay. So, let's go.");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_ChkPlayer(16) == 1){
        Parameter_AddCh1Param(8, 61, 10);
        Parameter_AddCh1Param(8, 60, 6);
        Parameter_AddCh1Param(8, 62, #10);
        }
    }
