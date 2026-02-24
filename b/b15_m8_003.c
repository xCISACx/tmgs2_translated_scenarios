section "b15_m8_003"{
    int var0;
    Background_CarBGOpen2("BG_EX170_AU_2");
    Background_CarBGScroll(0);
    Background_CarBGScroll(#1);
    Background_CarBgSpeedChange(#8, 8);
    var0 = Parameter_GetSysParam(4);
    switch (var0){
        case 0:
        Still_Event("EV_08_31", #1, 0, 1);
        break ;
        case 1:
        Still_Event("EV_08_32", #1, 0, 1);
        break ;
        case 2:
        Still_Event("EV_08_33", #1, 0, 1);
        break ;
        case 3:
        Still_Event("EV_08_34", #1, 0, 1);
        break ;
        }
    System_Wait(5);
    Screen_WipeIn(3);
    Still_StillFace(0, 2, 4);
    Still_StillFace(0, 3, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H02400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Hmm?");
    Message_Who(0);
    Message_MsgDisp("主人公", "What's the matter?");
    Still_StillFace(0, 2, 4);
    Still_StillFace(0, 3, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H02500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Your hands are kind of hot.\nAre you feeling sick?");
    Message_Who(0);
    Message_MsgDisp("主人公", "No, I'm not...");
    Still_StillFace(0, 2, 4);
    Still_StillFace(0, 3, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H02600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... Oh, they're a little red.");
    SoundEffect_PlayStream(3, "SS_DSE_001_000");
    Background_CarBgSpeedChange(0, 180);
    System_Wait(180);
    Still_StillFace(0, 2, 6);
    Still_StillFace(0, 3, 1);
    Voice_PlayVoice("XD_08_00_H02700", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Do you mind?");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Whoa...!)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Still_Event("");
    Screen_ClearScreen();
    Voice_PlayVoice("XD_08_00_H02800", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I won't know if I don't touch your\nforehead...\nI'm gonna touch your cheeks and\nneck, too.");
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay...");
    Voice_PlayVoice("XD_08_00_H02900", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "You feel hot......\nYou've also got a fast pulse.");
    Message_Who(0);
    Message_MsgDisp("主人公", "T-That's because Masaki-senpai...!");
    switch (var0){
        case 0:
        Still_Event("EV_08_31", #1, 0, 1);
        break ;
        case 1:
        Still_Event("EV_08_32", #1, 0, 1);
        break ;
        case 2:
        Still_Event("EV_08_33", #1, 0, 1);
        break ;
        case 3:
        Still_Event("EV_08_34", #1, 0, 1);
        break ;
        }
    Background_CarBGOpen2("BG_EX170_AU_2");
    System_Wait(10);
    Screen_WipeIn(2);
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 2, 6);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("XD_08_00_H03000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Ah... Sorry. Is it my fault...\nthat you've got a fast pulse...?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Uhh, umm...\nAh, the light is green,\nMasaki-senpai!");
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("XD_08_00_H03100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... Oh, thanks.");
    SoundEffect_PlayStream(3, "SS_DSE_004_000");
    Background_CarBGScroll(0);
    Background_CarBGScroll(#1);
    Background_CarBgSpeedChange(#8, 240);
    System_Wait(120);
    Still_StillFace(0, 0, 1);
    Still_StillFace(0, 6, 2);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("XD_08_00_H03300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I'm an idiot.\nI'll add it to the \"banned\" list...");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Masaki-senpai?)");
    }
